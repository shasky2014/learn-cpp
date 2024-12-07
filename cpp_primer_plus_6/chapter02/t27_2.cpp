#include <base.h>

// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)
int main()
{
    double furlongs;
    cout << "Enter a distance in furlongs: ";
    cin >> furlongs;
    cout << furlongs << " furlongs is " << furlongs * 220 << " yards." << endl;
    return 0;
}