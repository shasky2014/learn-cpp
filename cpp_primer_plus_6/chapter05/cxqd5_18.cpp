#include <base.h>
int main()
{
    char ch;
    int count = 0;
    cin.get(ch);                // attempt to read a char
    while (cin.fail() == false) // test for EOF
    {
        cout << ch; // echo character
        ++count;
        cin.get(ch); // attempt to read another char
    };
    cout << endl
         << count << " characters read"
         << endl
         << 18 * 1024 / 30.0 << endl;
    // https://www.123865.com/s/mxEgjv-usI4?提取码:6666
    /*
    我通过百度网盘分享的文件：10.ggb
    链接：https://pan.baidu.com/s/1DB8BnDb2SWmjU5DhDOIl8A
    提取码：15G3
    复制这段内容打开「百度网盘APP即可获取」
    */

    return 0;
}