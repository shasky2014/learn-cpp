#include <base.h>
/*
    1. Write a program that repeatedly asks the user to enter pairs of numbers until at
    least one of the pair is 0. For each pair, the program should use a function to calcu-
    late the harmonic mean of the numbers.The function should return the answer to
    main(), which should report the result.The harmonic mean of the numbers is the
    inverse of the average of the inverses and can be calculated as follows:
    harmonic mean = 2.0 × x × y / (x + y)
*/
double mean(double x, double y);
int main(int argc, char const *argv[])
{
    cout << "Enter two numbers (0 to quit): " << endl;
    double x, y;
    while (cin >> x >> y)
    {
        double result = mean(x, y);
        if (x == 0 || y == 0)
        {
            cout << "so break beacause one of the pair is 0" << endl;
            break;
        }
        else
        {
            cout << "The harmonic mean is " << result << endl;
        }
        cout << "Enter two numbers (0 to quit): " << endl;
    }
    return 0;
}

double mean(double x, double y)
{
    if (x == 0 || y == 0)
    {
        return 0;
    }

    return 2.0 * x * y / (x + y);
}