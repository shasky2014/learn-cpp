#include <base.h>
#include <string>

int main(int argc, char const *argv[])
{
    /*
    char[] 和string的区别
    */
    char c1[50];
    char c2[] = "Ernest Hemingway";
    string s1;
    string s2 = "Old man and the sea Old man and the sea Old man and the sea Old man and the sea";
    cout << "c1 = ";
    cin >> c1;
    cout << "s1 = ";
    cin >> s1;
    cout << "The third letter of c1 [" << c1 << "] is " << c1[2] << endl
         << "    and sizeof(c1)=" << sizeof(c1) << endl;
    cout << "The third letter of c2 [" << c2 << "] is " << c2[2] << endl
         << "    and sizeof(c2)=" << sizeof(c2) << endl;
    cout << "The third letter of s1 [" << s1 << "] is " << s1[2] << endl
         << "    and sizeof(s1)=" << sizeof(s1) << endl;
    cout << "The third letter of s2 [" << s2 << "] is " << s2[2] << endl
         << "    and sizeof(s2)=" << sizeof(s2) << endl;

    return 0;
}
