#include <base.h>

/*
Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon. Note that in addition to using different units of measurement, the
U.S.approach (distance / fuel) is the inverse of the European approach (fuel / distance).

-----
Note that 100 kilometers is 62.14 miles,and 1 gallon is 3.875 liters.
Thus, 19 mpg is about 12.4 l/100 km,and 27 mpg is about 8.7 l/100 km.
*/
int main()
{
    double mpg;
    cout << "Enter your automobile gasoline consumption figure "
         << "in European style (liters per 100 kilometers): "
         << endl;
    cin >> mpg;

    const double HANDERDKMTOMAILE = 62.14;
    const double GALLOMTOLITER = 3.875;

    double lp100km = (GALLOMTOLITER * HANDERDKMTOMAILE) / mpg;

    cout << mpg << " mpg is " << lp100km << " l/100 km." << endl;
    return 0;
}