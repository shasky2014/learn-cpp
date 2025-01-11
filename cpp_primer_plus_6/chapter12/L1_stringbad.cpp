#include <iostream>
#include <cstring>
#include "L1_stringbad.h"
using std::cout;
using std::endl;
using std::strcpy;
using std::strlen;

int StringBad::num_strings = 0;

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    strcpy(str, "c++");
    num_strings++;
}

StringBad::StringBad(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
}
StringBad::~StringBad()
{
    delete[] str;
    num_strings--;
    cout << num_strings << " left\n";
}
int StringBad::length() const { return len; }
int StringBad::size() const { return len; }

StringBad operator+(const StringBad &a, const StringBad &b)
{
    StringBad c = StringBad();
    c.len = a.len + b.len;
    c.str = new char[c.len + 1];
    strcpy(c.str, a.str);
    strcpy(c.str + a.len, b.str);
    return c;
}

std::ostream &operator<<(std::ostream &os, const StringBad &st)
{
    os << st.str;
    return os;
}

std::istream &operator>>(std::istream &ist, StringBad &st)
{
    st.str = new char[100];
    ist.getline(st.str, 100);
    st.len = strlen(st.str);
    return ist;
}