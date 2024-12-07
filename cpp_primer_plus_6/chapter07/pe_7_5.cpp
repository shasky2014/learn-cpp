#include <base.h>
/*
5. Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.
*/
long long factorial(int);
int main()
{
    int n = 9;
    for (int i = 3; i <= n; i++)
    {
        long long f = factorial(i);
        cout << i << "! = " << f << endl;
    }
    return 0;
}
long long factorial(int x)
{
    long long result = 1;

    if (x > 0)
    {
        result = x * factorial(x - 1);
    }
    return result;
};