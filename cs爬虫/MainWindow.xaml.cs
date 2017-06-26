using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.IO;
using System.Net;

namespace cs爬虫
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            downloads("http://www.tbs.co.jp/anime/urara/special/specil03.html"); 
        }
        int downloads(string url)
        {
            try
            {
                WebRequest request = System.Net.WebRequest.Create(url); ;
                WebResponse response = request.GetResponse();
                Stream reader = response.GetResponseStream();
                FileStream writer = new FileStream("D:\\aacaaaa.txt", FileMode.OpenOrCreate, FileAccess.Write);
                byte[] buff = new byte[512];
                int c = 0; //实际读取的字节数
                while ((c = reader.Read(buff, 0, buff.Length)) > 0)
                {
                    writer.Write(buff, 0, c);
                }
                MessageBox.Show("success");
                writer.Close();
                return 0;
            }
            catch (WebException)
            {
                return 1;
            }

        }
    }
    class number
    {
        private int ten;
        private int b;
        public int B
        {
            get { return b; }
            set
            {
                if (b == 9)
                {
                    ten++;
                    b = 0;
                }
                else
                {
                    b++;
                }
            }
        }
        public string getit()
        {
            string back = ten.ToString()+b.ToString();
            return back;
        }
        public void turnintozero()
        {
            ten = 0;
            b = 0;
        }
        public number()
        {
            turnintozero();
        }
    };
}
