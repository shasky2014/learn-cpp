#include <iostream>
#include <cstring>
#include <string>

using std::string;

void strcount(const string &s);
int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    string input;
    int count = 0;
    cout << "Enter lines (empty line to quit):\n";
    while (getline(cin, input), (input != ""))
    {
        strcount(input);
    }
    cout << "Bye\n";
}
void strcount(const string &s)
{
    using std::cout;
    int count = 0;
    static int total = 0;

    count = s.size();
    total = total + count;

    cout << "\"" << s << "\" contains\n"
         << count << " characters \n"
         << total << " characters total\n";
}