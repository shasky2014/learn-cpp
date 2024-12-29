#include <iostream>
#include "L1_stock.h"
int main(int argc, char const *argv[])
{
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.5);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(30000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(30000, 20.125);
    fluffy_the_cat.show();

    return 0;
}
