#include <iostream>
#include <cstring>
#include "L1_stringbad.h"
using std::cin;
using std::cout;
using std::endl;
using std::strcpy;
using std::strlen;
void callme1(StringBad &rsb)
{
    cout << "callme1(StringBad &rsb):" << endl;
    cout << rsb << endl;
}
void callme2(StringBad rsb)
{
    cout << "callme2(StringBad rsb):" << endl;
    cout << rsb << endl;
}
int main(int argc, char const *argv[])
{
    StringBad headline("C++ Programeming");
    cout << headline << endl;
    StringBad sb1 = "C++ Programeming sb1";
    callme1(sb1);
    callme2(sb1);
    cout << sb1 << endl;
    StringBad sb2 = "C++ Programeming sb2";
    cout << sb2 << endl;
    callme2(sb2);
    cout << sb2 << endl;
    StringBad sb3 = sb1 + sb2;
    cout << sb3 << endl;
    StringBad sb4;
    cout << "default StringBad:" << sb4 << endl;
    cout << sb4.length() << endl;
    cin >> sb4;
    cout << sb4 << endl;
    cout << sb4.length() << endl;
    StringBad sb5;
    sb5 = sb4;
    cout << sb5 << endl;
    return 0;
}
