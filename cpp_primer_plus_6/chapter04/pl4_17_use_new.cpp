#include <base.h>
int main(int argc, char const *argv[])
{
    int nights = 1001;
    cout << "nights = " << nights
         << ": location " << &nights << endl;
    int *pt = new int;
    cout << "*pt = " << *pt
         << ": location " << pt << endl;

    *pt = 1001;
    cout << "*pt = " << *pt
         << ": location " << pt << endl;

    double *pd = new double;
    cout << "*pd = " << *pd
         << ": location " << pd << endl;
    *pd = 1001.4431;
    cout << "*pd = " << *pd
         << " : location " << pd << endl;
    cout << "size of pt=" << sizeof(pt)
         << " : size of *pt=" << sizeof(*pt) << endl;

    cout
        << "size of pd=" << sizeof(pd)
        << " : size of *pd=" << sizeof(*pd) << endl;

    return 0;
}
