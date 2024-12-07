#include <base.h>
/*
10. Design a function calculate() that takes two type double values and a pointer to
a function that takes two double arguments and returns a double.The
calculate() function should also be type double, and it should return the value
that the pointed-to function calculates, using the double arguments to
calculate(). For example, suppose you have this definition for the add()
function:
*/
double add(double x, double y);
double power(double x, double y);
double mutiply(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));
double calculate2(double x, double y, double (*pf[3])(double, double));

int main()
{

    double x = 5;
    double y = 6;
    cout << "main() called. add=" << add << endl;
    cout << "main() called. mutiply=" << mutiply << endl;

    double result = calculate(x, y, add);
    cout << "add(x, y) =\t" << result << endl;
    result = calculate(x, y, mutiply);
    cout << "mutiply(x, y) =\t" << result << endl;

    double (*pf[3])(double, double) = {add, mutiply, power};
    calculate2(x, y, pf);

    return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    cout << "calculate() called. &pf=" << &pf << " pf=" << pf << endl;
    return (*pf)(x, y);
}
double calculate2(double x, double y, double (*pf[3])(double, double))
{
    double result = 0.0;
    cout << "calculate2() called. &pf=" << &pf << " pf=" << pf << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "calculate2() called. pf[" << i << "]=" << pf[i] << endl;
        result = (*pf[i])(x, y);
        cout << "pf[" << i << "](" << x << "," << y << ") = " << result << endl;
    }
    return result;
}
double add(double x, double y)
{
    return x + y;
}
double mutiply(double x, double y)
{
    return x * y;
}
double power(double x, double y)
{
    double result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}
