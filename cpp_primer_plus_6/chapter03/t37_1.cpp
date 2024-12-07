#include <base.h>

/*
Write a short program that asks for your height in integer inches and then converts
your height to feet and inches. Have the program use the underscore character to
indicate where to type the response.Also use a const symbolic constant to represent
 the conversion factor.
*/

int main()
{
    const int conversion_factor = 12;
    int inches;
    cout << "Enter your height in integer inches: ";
    cin >> inches;

    cout << "Your height in feets: " << inches * conversion_factor << endl;
    return 0;
}