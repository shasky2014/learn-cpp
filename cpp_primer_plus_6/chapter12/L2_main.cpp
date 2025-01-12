#include <iostream>
#include <cstring>
#include "L2_string.h"
using std::cin;
using std::cout;
using std::endl;
using std::strcpy;
using std::strlen;
using namespace mystring;
void callme1(String &s)
{
    cout << "callme1(String &s):" << endl;
    cout << s << endl;
}
void callme2(String s)
{
    cout << "callme2(String s):" << endl;
    cout << s << endl;
}
int main(int argc, char const *argv[])
{
    // String headline("C++ Programeming");
    // cout << headline << endl;
    // String sb1 = "C++ Programeming sb1";
    // callme1(sb1);
    // callme2(sb1);
    // cout << sb1 << endl;
    // String sb2 = "C++ Programeming sb2";
    // cout << sb2 << endl;
    // callme2(sb2);
    // cout << sb2 << endl;
    // String sb3 = sb1 + sb2;
    // cout << sb3 << endl;
    // String sb4;
    // cout << "default String:" << sb4 << endl;
    // cout << sb4.length() << endl;
    // cout << "Enter string:" << endl;

    // cin >> sb4;
    // cout << sb4 << endl;
    // cout << sb4.length() << endl;
    // String sb5;
    // sb5 = sb4;
    // cout << sb5 << endl;

    String name;
    cout << "Enter name:\n";
    cin >> name;
    cout << name << ", Enter short saying <empty line to quit>:" << endl;

    char temp[String::CINLIM + 1];
    String *string_list = new String[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << i + 1 << ":";
        cin.get(temp, String::CINLIM + 1);

        // cin.get(temp,size)后好有一个'\n'保留在cin，
        // 此时需要cin.get()一次才能进入下一次的输入
        // 如果 输入超过size，就需要下面的while把cin里超过size部分丢弃
        while (cin && cin.get() != '\n')
            continue;

        if (!cin || temp[0] == '\0') // 输入空串后，提前结束for循环
        {
            cout << "\nEnter string is blank, so break the loop for input.\n";
            break;
        }
        else
            string_list[i] = temp;
    }

    cout << "show all input sayings:\n";
    int short_saying_num = 0;
    int first = 0;
    for (int j = 0; j < i; j++)
    {
        cout << string_list[j][0] << ":" << string_list[j] << endl;
        short_saying_num = string_list[j].length() > string_list[short_saying_num].length() ? short_saying_num : j;
        first = string_list[j][0] > string_list[first][0] ? first : j;
    }

    cout << "shortest saying is:\n"
         << string_list[short_saying_num] << endl;
    cout << "first alphabetically saying is:\n"
         << string_list[first] << endl;

    cout << "all use " << String::HowMany() << " String objects Bye" << endl;
    return 0;
}
