#include <string>
#include <base.h>

string ver1(const string &s1, const string &s2);
const string &ver2(string &s1, const string &s2);
const string &ver3(string &s1, const string &s2);

int main(int argc, char const *argv[])
{
    string input1;
    string copy1;
    string result1;
    cout << "Enter a string: ";
    getline(cin, input1);
    copy1 = input1;
    cout << "got str: " << input1 << endl;
    result1 = ver1(input1, "***");
    cout << "ver1: " << result1 << endl;
    cout << "orig: " << input1 << endl;

    result1 = ver2(input1, "---");
    cout << "ver2: " << result1 << endl;
    cout << "orig: " << input1 << endl;

    input1 = copy1; // reset input1 as original
    const string &result2 = ver3(input1, "###");
    cout << "ver3: " << result2 << endl;
    cout << "orig: " << input1 << endl;
    delete &result2;
    return 0;
}

string ver1(const string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string &ver2(string &s1, const string &s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}

const string &ver3(string &s1, const string &s2)
{
    // 这里只有new一下才能正确的编译，和书上说的不一样
    // 对比ver1，返回引用和返回值，还是是有差异的
    string *temp = new string();
    *temp = s2 + s1 + s2;
    return *temp;
}
