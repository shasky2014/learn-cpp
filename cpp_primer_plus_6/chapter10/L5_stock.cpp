#include <iostream>
#include <print>
#include "L5_stock.h"

Stock::Stock()
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares purchased can't be negative. ";
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
    std::cout << "Bye, " << company << "!\n";
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
void Stock::show() const
{
    printf("Stock:{\n"
           "\tCompany name= %s,\t&=%p\n"
           "\tShares number= %d,\t&=%p\n"
           "\tShare Price= $%.3lf,\t&=%p\n"
           "\tTotal Value= $%.3lf,\t&=%p\n}\n",
           company.c_str(), &company, shares, &shares, share_val, &share_val, total_val, &total_val);
}
const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
