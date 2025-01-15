#include <iostream>
#include <cstring>
#include <print>
#include "PE3_stock.h"
using std::cout;
using std::endl;
using std::strcpy;
using std::strlen;
Stock::Stock()
{
    std::cout << "Default constructor called\n";
    company = new char[20];
    strcpy(company, "Default name");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const Stock &s)
{
    company = new char[strlen(s.company) + 1];
    strcpy(company, s.company);
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;
}
Stock::Stock(const char *co, long n, double pr)
{
    company = new char[strlen(co) + 1];
    strcpy(company, co);
    if (n < 0)
    {
        cout << "Number of shares purchased can't be negative. ";
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}
Stock::~Stock()
{
    cout << "Bye, " << company << "!\n";
    delete[] company;
}
Stock &Stock::operator=(const Stock &s)
{
    if (this == &s)
        return *this;
    delete[] company;
    company = new char[strlen(s.company) + 1];
    strcpy(company, s.company);
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;
    return *this;
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. ";
    }
    else
    {
        shares = shares + num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares purchased can't be negative. ";
    }
    else if (num > shares)
    {
        cout << "You can't sell more then you have!\n";
    }
    else
    {
        shares = shares - num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
std::ostream &operator<<(std::ostream &os, const Stock &s)
{
    os << "Stock[" << &s
       << "]:{Company name=" << s.company << ",&=" << &s.company
       << ",Shares number=" << s.shares << ",&=" << &s.shares
       << ",Share Price=$" << s.share_val << ",&=" << &s.share_val
       << ",Total Value=$" << s.total_val << ",&=" << &s.total_val
       << "}";
    return os;
}

const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
