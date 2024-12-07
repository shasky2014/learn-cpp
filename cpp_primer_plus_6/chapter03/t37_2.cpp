#include <base.h>

/*
Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.
*/
double feetsToInches(double feets)
{
    const double INCHES_TO_FEETS = 12;
    return feets / INCHES_TO_FEETS;
}

double inchesToMeters(double inches)
{
    const double INCHES_TO_METERS = 0.0254;
    return inches * INCHES_TO_METERS;
}

double poundsToKilograms(double pounds)
{
    const double POUNDS_TO_KILOGRAMS = 2.2;
    return pounds / POUNDS_TO_KILOGRAMS;
}

double bmi(double height, double weight)
{
    return weight / (height * height);
}
int main()
{
    double inches, feets, pounds;
    cout << "Enter your height in feet and inches." << endl;
    cout << "Inches:";
    cin >> inches;
    cout << "Feets:";
    cin >> feets;

    cout << "Enter your weight in  pounds: ";
    cin >> pounds;

    double height = inchesToMeters(inches + feetsToInches(feets));
    double weight = poundsToKilograms(pounds);

    cout << "Your body mass index (BMI) is:"
         << bmi(height, weight) << endl;
    return 0;
}