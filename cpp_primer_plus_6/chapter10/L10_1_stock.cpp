#include <iostream>
#include "L10_1_stock.h"

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
    std::cout << "Company: " << company
              << " Shares: " << shares << "\n"
              << "    Share Price: $" << share_val
              << " Total Value: $" << total_val << "\n";
}
