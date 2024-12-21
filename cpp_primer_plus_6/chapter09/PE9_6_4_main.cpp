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

/*
油
100 元
6.08 元/L
x*6.08 =100
x = 100/6.08 = 16.25

表现里程： 268 公里,剩余96公里，原始剩余40公里，跑了 268-96=172 公里 剩余96-40=56 公里
16.25 * 172 / 230 = 12.152173913043478
12.15 / 161 = 7.546583850931678

里程：161 公里
*/