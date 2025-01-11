#include <iostream>
#include <cstring>
#include "L1_stringbad.h"
using std::cin;
using std::cout;
using std::endl;
using std::strcpy;
using std::strlen;
int main(int argc, char const *argv[])
{
    StringBad headline("C++ Programeming");
    cout << headline << endl;
    StringBad sb1 = "C++ Programeming sb1";
    cout << sb1 << endl;
    StringBad sb2 = "C++ Programeming sb2";
    cout << sb2 << endl;
    StringBad sb3 = sb1 + sb2;
    cout << sb3 << endl;
    StringBad sb4;
    cout << "default StringBad:" << sb4 << endl;
    cout << sb4.length() << endl;
    cin >> sb4;
    cout << sb4 << endl;
    cout << sb4.length() << endl;

    return 0;
}
