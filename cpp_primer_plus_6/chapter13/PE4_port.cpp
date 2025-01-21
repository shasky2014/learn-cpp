#include <iostream>
#include <cstring>
#include "PE4_port.h"
using std::cout;
using std::endl;
Port::Port(const char *br, const char *st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottlesnum = b;
}
Port::Port(const Port &p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottlesnum = p.bottlesnum;
}
Port::~Port()
{
    delete[] brand;
}
Port &Port::operator=(const Port &p)
{
    if (this == &p)
        return *this;
    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottlesnum = p.bottlesnum;
    return *this;
}
Port &Port::operator+=(int b)
{
    bottlesnum += b;
    return *this;
}
Port &Port::operator-=(int b)
{
    if (bottlesnum - b < 0)
        bottlesnum = 0;
    else
        bottlesnum -= b;
    return *this;
}
void Port::show() const
{
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottlesnum << endl;
}
std::ostream &operator<<(std::ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottlesnum;
    return os;
}
VintagePort::VintagePort()
    : Port("none", "vintage", 0)
{
    nickname = new char[strlen("none") + 1];
    strcpy(nickname, "none");
    year = 0;
}
VintagePort::VintagePort(const char *Brand, int Bottles, const char *nn, int y)
    : Port(Brand, "vintage", Bottles)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp)
    : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}
VintagePort::~VintagePort()
{
    delete[] nickname;
}
VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}
void VintagePort::show() const
{
    Port::show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}
std::ostream &operator<<(std::ostream &os, const VintagePort &p)
{
    os << static_cast<const Port &>(p) << ", " << p.nickname << ", " << p.year;
    return os;
}