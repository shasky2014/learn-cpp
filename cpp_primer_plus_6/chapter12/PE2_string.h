#ifndef L2_STRING_H_
#define L2_STRING_H_
#include <iostream>
namespace mystring
{
    class String
    {
    private:
        static int num_strings;
        char *str;
        int len;

    public:
        static const int CINLIM = 100;
        String();                // default constructor
        String(const String &s); // deep copy constructor
        String(const char *s);
        ~String(); // destructor

        int length() const;
        int size() const;

        String upper() const;
        String lower() const;
        int countof(const char a) const;

        String &operator=(const String &a);
        String &operator=(const char *s);
        char &operator[](int i);
        const char &operator[](int i) const;

        friend bool operator<(const String &a, const String &b);
        friend bool operator>(const String &a, const String &b);
        friend bool operator==(const String &a, const String &b);

        friend String operator+(const String &a, const String &b);
        friend std::ostream &operator<<(std::ostream &os, const String &st);
        friend std::istream &operator>>(std::istream &ist, String &st);

        static int HowMany() { return num_strings; }
    };
}

#endif
