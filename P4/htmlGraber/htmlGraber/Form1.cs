using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Net;
using System.Text;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace htmlGraber
{
    public partial class Form1 : Form
    {
        private BindingList<grabedData> lstResult;

        public Form1()
        {
            InitializeComponent();
        }

        //根据Url地址得到网页的html源码 
        private string GetWebContent(string Url)
        {
            string strResult = "";
            try
            {
                var request = (HttpWebRequest) WebRequest.Create(Url);
                //声明一个HttpWebRequest请求 
                request.Timeout = 30000;
                //设置连接超时时间 
                request.Headers.Set("Pragma", "no-cache");
                var response = (HttpWebResponse) request.GetResponse();
                Stream streamReceive = response.GetResponseStream();
                Encoding encoding = Encoding.GetEncoding("GB2312");
                var streamReader = new StreamReader(streamReceive, encoding);
                strResult = streamReader.ReadToEnd();
            }
            catch
            {
                MessageBox.Show("下载超时");
            }
            return strResult;
        }


        private void button1_Click_1(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(textBox1.Text))
            {
                MessageBox.Show("请输入股票代码");
                return;
            }
            
            string code = textBox1.Text.Trim();
            var prefix = GetPrefix(code);
            if (prefix=="?")
            {
                MessageBox.Show("请输入正确的股票代码");
                return;
            }
            string stockcode = prefix + code;
            //要抓取的URL地址 
            string Url = string.Format("http://www.cninfo.com.cn/information/financialreport/{0}.html", stockcode);
            //得到指定Url的源码 
            string strWebContent = GetWebContent(Url);
            if (string.IsNullOrEmpty(strWebContent))
            {
                MessageBox.Show("下载超时");
                return;
            }
            //取出和数据有关的那段源码 
           
            Regex aCompanyRegex = new Regex("<strong>股票简称：</strong>(.*)</td>");
            string aCompanyName = aCompanyRegex.Match(strWebContent).Value.Replace("<strong>股票简称：</strong>", "").Replace("</td>", "");
            int iBodyStart = strWebContent.IndexOf("<body", 0);
            int iStart = strWebContent.IndexOf("zx_right_title", iBodyStart);
            int iTableStart = strWebContent.IndexOf("<table", iStart);
            int iTableEnd = strWebContent.IndexOf("</table>", iTableStart);
            string strWeb = strWebContent.Substring(iTableStart, iTableEnd - iTableStart + 8);
            //生成HtmlDocument 
            //var webb = new WebBrowser();
            //webb.Navigate("about:blank");
            //HtmlDocument htmldoc = webb.Document.OpenNew(true);
            //htmldoc.Write(strWeb);
            //HtmlElementCollection htmlTR = htmldoc.GetElementsByTagName("TR");

            lstResult = new BindingList<grabedData>();
            var tmplst = new List<string>();
            //HtmlElementCollection tmpHC;
            var aRegex = new Regex(@"<td bgcolor=""#daf2ff""> <div align=""center"">(.*)</div></td>");
            var aDateRegex = new Regex(@"<td width=""21%"" bgcolor=""#daf2ff""><div align=""center"">(.*)</div></td>");
            MatchCollection matchCollection = aRegex.Matches(strWeb);
            foreach (Match match in matchCollection)
            {
                tmplst.Add(match.Value.Replace(@"<td bgcolor=""#daf2ff""> <div align=""center"">", "")
                               .Replace(@"</div></td>", ""));
            }
            tmplst.Add(aCompanyName);
            Match matchCollection1 = aDateRegex.Match(strWeb);
            tmplst.Add(matchCollection1.Value.Replace(@"<td width=""21%"" bgcolor=""#daf2ff""><div align=""center"">", "")
                               .Replace(@"</div></td>", ""));

            var aa = new grabedData(tmplst, code);
            lstResult.Add(aa);
            grabedDataBindingSource.Clear();
            grabedDataBindingSource.Add(aa) ;
        
            
            //MessageBox.Show("done");
        }

        public string GetPrefix(string code)//获取代码前缀
        {
            Regex shmb = new Regex(@"600\d{3}|601\d{3}|900\d{3}");//上指
            Regex szmb = new Regex(@"000\d{3}|200\d{3}");//深指
            Regex szcn = new Regex(@"300\d{3}");//创业板
            Regex szsme = new Regex(@"002\d{3}");//中小板
            string prefix = "？";
            if (shmb.IsMatch(code))
            {
                prefix = "shmb";
            }
            if (szmb.IsMatch(code))
            {
                prefix = "szmb";
            }
            if (szcn.IsMatch(code))
            {
                prefix = "szcn";
            }
            if (szsme.IsMatch(code))
            {
                prefix = "szsme";
            }
            return prefix;
        }
    }

    public class grabedData
    {
        #region 各项数据

        public string s1 { get; set; } //基本每股收益(元)
        public string s2 { get; set; } //净利润率(%)
        public string s3 { get; set; } //每股净资产(元)
        public string s4 { get; set; } //总资产报酬率(%)
        public string s5 { get; set; } //净资产收益率—加权平均(%)
        public string s6 { get; set; } //存货周转率
        public string s7 { get; set; } //扣除后每股收益(元)
        public string s8 { get; set; } //固定资产周转率
        public string s9 { get; set; } //流动比率(倍)
        public string s10 { get; set; } //总资产周转率
        public string s11 { get; set; } //速动比率 (倍)
        public string s12 { get; set; } //净资产比率(%)
        public string s13 { get; set; } //应收帐款周转率(次)
        public string s14 { get; set; } //固定资产比率(%)
        public string s15 { get; set; } //资产负债比率(%)

        #endregion

        public string sDate { get; set; } //报告期
        public string companyName { get; set; }//公司名称
        public string code { get; set; } //股票代码

        public grabedData(List<string> aList,string acode)
        {
            grabedList = aList;
            code = acode;
            for (int index = 0; index < 15; index++)
            {
                string s = aList[index];
                this.GetType().GetProperty("s" + (index+1).ToString()).SetValue(this,s,null); 
            }
            companyName = aList[15];
            sDate = aList[16];
        }

        public List<string> grabedList { get; set; }
    }
}