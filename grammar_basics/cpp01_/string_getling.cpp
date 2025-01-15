#include <iostream>
#include <cstring>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string a;
    getline(cin, a);
    if (cin && cin.get() != '\n')
        cout << a << endl;
    return 0;
}
