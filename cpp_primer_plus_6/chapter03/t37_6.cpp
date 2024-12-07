#include <base.h>

/*
Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.
*/
int main()
{
    double miles, gallons;
    cout << "How many miles you have driven: ";
    cin >> miles;
    cout << "how many gallons of gasoline you have used: ";
    cin >> gallons;

    const double MILE_TO_KM = 1.609344;
    const double GALLON_TO_LITER = 3.875;

    double mpg = miles / gallons;
    double lp100km = 100 * (gallons * GALLON_TO_LITER) / (miles * MILE_TO_KM);
    cout << miles << " miles used " << gallons << " gallons" << endl;
    cout
        << mpg << " miles per gallon or" << endl;
    cout
        << lp100km << " liters per 100 kilometers. " << endl;
    return 0;
}