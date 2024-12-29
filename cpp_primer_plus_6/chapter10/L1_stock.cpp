#include <iostream>
#include <print>
#include "L1_stock.h"

void Stock::acquire(const std::string &co, long n, double pr)
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
void Stock::show()
{
    printf("Company: %s \tShares:%d\n", company.c_str(), shares);
    printf("\tShare Price: $%.3lf\tTotal Value: $%.3lf\n", share_val, total_val);
}
