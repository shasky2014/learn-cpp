#ifndef L1_STRINGBAD_H_
#define L1_STRINGBAD_H_
#include <iostream>
class StringBad
{
private:
    char *str;
    int len;
    static int num_strings;

public:
    StringBad(const char *s);
    StringBad();
    ~StringBad();
    int length() const;
    int size() const;
    friend StringBad operator+(const StringBad &a, const StringBad &b);
    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
    friend std::istream &operator>>(std::istream &ist, StringBad &st);
};

#endif
