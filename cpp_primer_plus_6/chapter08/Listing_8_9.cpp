#include <string>
#include <cstring>
#include <base.h>
// 函数默认参数、函数重载（函数多态）
string left(const string &s1, int n = 2);
char *left(const char *s1, int n = 1);
long long left(const long long &s1, int n = 1);

int main(int argc, char const *argv[])
{
    char s1[] = "Hello World";
    cout << s1 << endl;
    cout << left(s1) << endl;
    cout << left(s1, 3) << endl;

    string s2 = "abcdefghig";
    long long n1 = 1234567890;
    for (int i = 1; i <= 10; i++)
    {
        cout << left(s2, i) << endl;
        cout << left(n1, i) << endl;
    }
    // cout << s2 << endl;
    // cout << left(s2) << endl;
    // cout << left(s2, 7) << endl;

    // cout << n1 << endl;
    // cout << left(n1) << endl;
    // cout << left(n1, 4) << endl;
    return 0;
}
long long left(const long long &s1, int n)
{
    long long out = s1;
    long long copy = s1;
    int digits = 1;
    while (copy /= 10)
        digits++;
    // cout << s1 << " has " << digits << " digits" << endl;
    for (int i = digits; i > n; i--)
        out = out / 10;
    // cout << s1 << " top " << n << " digits is " << out << endl;
    return out;
}
string left(const string &s1, int n)
{
    string result;
    for (int i = 0; i < n && i < s1.size(); i++)
        result += s1[i];
    return result;
}

char *left(const char *s1, int n)
{
    int m = strlen(s1) > n ? n : strlen(s1);

    char *p = new char[m + 1];
    int i;
    for (i = 0; i < m; i++)
        p[i] = s1[i];
    p[i] = '\0';
    return p;
}
