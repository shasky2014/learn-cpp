#include <iostream>
#include "PE9_6_4.h"
int main(int argc, char const *argv[])
{
    using namespace SALES;
    Sales s1;
    Sales s2;
    setSales(s1);
    showSales(s1);
    double ar[] = {10, 20, 30};
    int n = 3;
    setSales(s2, ar, n);
    showSales(s2, n);
    return 0;
}
