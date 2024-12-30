#include <iostream>
#include <cstring>
#include "PE4_Sales.h"

int main(int argc, char const *argv[])
{
    using namespace SALES;
    using namespace std;
    Sales s1;
    cout << "s1:" << endl;
    s1.show();

    s1.set();
    cout << "s1 after set:" << endl;
    s1.show();

    double ar[] = {10, 20, 30};
    int n = 3;
    Sales s2(ar, n);
    cout << "s2:" << endl;
    s2.show();
    return 0;
}
