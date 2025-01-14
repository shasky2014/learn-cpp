#include <iostream>
#include <cstring>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    char *a;
    cout << &a << ":" << a << endl;
    const char b[] = "abcdefghabcdefghabcdefghabcdefghabcdefgh";
    strcpy(a, b);
    cout << &a << ":" << a << endl;
    cout << &b << ":" << b << endl;
    return 0;
}
