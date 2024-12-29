#include <iostream>
#include "L4_stock.h"
int main(int argc, char const *argv[])
{
    Stock stock1("stock1", 20, 12.5);
    stock1.show();
    {
        Stock stock2 = Stock("stock2", 10, 20.125);
        stock2.show();
    }
    Stock stock3;
    stock3.show();
    stock3 = stock1;
    stock3.show();
    Stock stock4 = {"stock4", 100, 20.125};
    stock4.show();
    stock4 = Stock("stock4_2", 500, 10);
    stock4.show();
    // stock1.buy(15, 18.125);
    // stock1.show();
    // stock1.sell(400, 20.00);
    // stock1.show();
    // stock1.buy(30000, 40.125);
    // stock1.show();
    // stock1.sell(30000, 20.125);
    // stock1.show();

    return 0;
}
