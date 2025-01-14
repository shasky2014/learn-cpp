#include <iostream>
#include <cstring>
#include <cctype>
#include "PE2_string.h"
using std::cout;
using std::endl;
using std::strcmp;
using std::strcpy;
using std::strlen;
namespace mystring
{
    int String::num_strings = 0;

    String::String()
    {
        len = 0;
        str = new char[1];
        str[0] = '\0';
        num_strings++;
    }
    String::String(const String &s)
    {
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
        num_strings++;
    }
    String::String(const char *s)
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
        num_strings++;
    }
    String::~String()
    {
        delete[] str;
        num_strings--;
    }
    int String::length() const { return len; }
    int String::size() const { return len; }
    String String::upper() const
    {
        String a = *this;
        for (int i = 0; i < len; i++)
        {
            a.str[i] = toupper(str[i]);
        }
        return a;
    }
    String String::lower() const
    {
        String a = *this;
        for (int i = 0; i < len; i++)
        {
            a.str[i] = tolower(str[i]);
        }
        return a;
    }
    int String::countof(const char a) const
    {
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == a)
                count++;
        }
        return count;
    }
    String &String::operator=(const String &a)
    {
        if (this == &a)
            return *this;
        delete[] str;
        len = a.len;
        str = new char[len + 1];
        strcpy(str, a.str);
        return *this;
    }

    String &String::operator=(const char *s)
    {
        delete[] str;
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
        return *this;
    }
    char &String::operator[](int i)
    {
        return str[i];
    }
    const char &String::operator[](int i) const
    {
        return str[i];
    }

    bool operator<(const String &a, const String &b)
    {

        return strcmp(a.str, b.str) < 0;
    }
    bool operator>(const String &a, const String &b)
    {
        return strcmp(a.str, b.str) > 0;
    }
    bool operator==(const String &a, const String &b)
    {
        return strcmp(a.str, b.str) == 0;
    }

    String operator+(const String &a, const String &b)
    {
        char *str_ = new char[a.len + b.len + 1];
        strcpy(str_, a.str);
        strcpy(str_ + a.len, b.str);
        return String(str_);
    }

    std::ostream &operator<<(std::ostream &os, const String &st)
    {
        if (st.str)
            os << st.str;
        return os;
    }

    std::istream &operator>>(std::istream &ist, String &st)
    {
        char tmp[String::CINLIM];
        ist.get(tmp, String::CINLIM);
        if (ist)
            st = tmp;
        // cout << ist.get();
        // 处理 cin.get()
        // 比如输入超CINLIM后，赋值给tmp一部分，还保留一部分在cin中，使用while丢弃
        while (ist && ist.get() != '\n')
            continue;
        return ist;
    }
}
