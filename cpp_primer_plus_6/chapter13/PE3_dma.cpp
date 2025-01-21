#include <iostream>
#include <cstring>
#include "PE3_dma.h"
using std::cout;
using std::endl;
using std::ostream;
using std::strcpy;
using std::strlen;
abcDMA::abcDMA(const char *l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}
abcDMA::abcDMA(const abcDMA &a)
{
    label = new char[strlen(a.label) + 1];
    strcpy(label, a.label);
    rating = a.rating;
}
abcDMA::~abcDMA()
{
    cout << "abcDMA[" << this << "] delete\n";
    delete[] label;
}

abcDMA &abcDMA::operator=(const abcDMA &a)
{
    if (this == &a)
        return *this;
    delete[] label;
    label = new char[strlen(a.label) + 1];
    strcpy(label, a.label);
    rating = a.rating;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const abcDMA &a)
{
    os << "[" << &a << "]label: " << a.label
       << "\n[" << &a << "]rating:" << a.rating << '\n';
    return os;
}
void abcDMA::view() const
{
    cout << "[" << this << "] label:" << label
         << "\n[" << this << "] rating:" << rating << '\n';
}

baseDMA::baseDMA(const char *l, int r)
    : abcDMA(l, r)
{
}

baseDMA::baseDMA(const baseDMA &a)
    : abcDMA(a)
{
}
baseDMA::~baseDMA()
{
    cout << "baseDMA[" << this << "] delete\n";
}
baseDMA &baseDMA::operator=(const baseDMA &a)
{
    if (this == &a)
        return *this;
    abcDMA::operator=(a);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const baseDMA &a)
{
    os << static_cast<const abcDMA &>(a);
    return os;
}
void baseDMA::view() const
{
    abcDMA::view();
}
lacksDMA::lacksDMA(const char *c, const char *l, int r)
    : abcDMA(l, r)
{
    strcpy(color, c);
}

lacksDMA::lacksDMA(const lacksDMA &a)
    : abcDMA(a)
{
    strcpy(color, a.color);
}
lacksDMA::~lacksDMA()
{
    cout << "lacksDMA[" << this << "] delete\n";
}
lacksDMA &lacksDMA::operator=(const lacksDMA &a)
{
    if (this == &a)
        return *this;
    abcDMA::operator=(a);
    strcpy(color, a.color);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const lacksDMA &a)
{
    os << static_cast<const abcDMA &>(a)
       << "[" << &a << "]color: " << a.color << '\n';
    return os;
}
void lacksDMA::view() const
{
    abcDMA::view();
    cout << "[" << this << "] color: " << color << '\n';
}
hasDMA::hasDMA(const char *s, const char *l, int r)
    : abcDMA(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &a)
    : abcDMA(a)
{
    style = new char[strlen(a.style) + 1];
    strcpy(style, a.style);
}
hasDMA::~hasDMA()
{
    cout << "hasDMA[" << this << "] delete\n";
    delete[] style;
}

hasDMA &hasDMA::operator=(const hasDMA &a)
{
    if (this == &a)
        return *this;
    abcDMA::operator=(a);
    delete[] style;
    style = new char[strlen(a.style) + 1];
    strcpy(style, a.style);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const hasDMA &a)
{
    os << static_cast<const abcDMA &>(a)
       << "[" << &a << "]style: " << a.style << '\n';
    return os;
}
void hasDMA::view() const
{
    abcDMA::view();
    cout << "[" << this << "] style: " << style << '\n';
}