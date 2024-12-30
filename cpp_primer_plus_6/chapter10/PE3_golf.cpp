#include <iostream>
#include <cstring>
#include "PE3_golf.h"
Golf::Golf()
{
}
Golf::Golf(const char *name, int lnc)
{
    strncpy(fullname_, name, Len);
    handicap_ = lnc;
}

Golf Golf::setgolf()
{
    using std::cin;
    using std::cout;
    using std::strlen;
    cout << "Enter full name: ";
    cin.getline(fullname_, Len);
    if (strlen(fullname_) == 0)
    {
        cout << "Enter full name is empty, please try again.";
        return *this;
    }
    cout << "Enter handicap: ";
    cin >> handicap_;
    cin.get();
    return *this;
}
void Golf::handicap(int lnc)
{
    handicap_ = lnc;
}
void Golf::show() const
{
    std::cout << "Golf[" << this << "]{name=" << fullname_ << ",handicap=" << handicap_ << "}\n";
}