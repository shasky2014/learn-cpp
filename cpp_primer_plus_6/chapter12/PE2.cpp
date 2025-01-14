#include <iostream>
#include <cstring>
#include "PE2_string.h"
using std::cin;
using std::cout;
using std::endl;
using std::strcmp;
using std::strcpy;
using std::strlen;
using namespace mystring;
int main(int argc, char const *argv[])
{
    String a = "sahoawnTH";
    cout << "a:" << a << '\n';
    cout << "a.lower:" << a.lower() << '\n';
    cout << "a.upper:" << a.upper() << '\n';
    cout << "a:" << a << '\n';
    cout << "a.countof('a'):" << a.countof('a') << '\n';
    String b("kfc NBkelasi");
    cout << "b:" << b << '\n';
    cout << "a+b:" << a + b << '\n';
    String c;
    cin >> c;
    cout << "c:" << c.countof('c') << '\n';
    return 0;
}
