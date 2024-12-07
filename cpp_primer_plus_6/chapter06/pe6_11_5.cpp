#include <base.h>
#include <cctype>

int main(int argc, char const *argv[])
{
    /*
    5. The Kingdom of Neutronia, where the unit of currency is the tvarp, has the fol-
    lowing income tax code:
    First 5,000 tvarps: 0% tax
    Next 10,000 tvarps: 10% tax
    Next 20,000 tvarps: 15% tax
    Tvarps after 35,000: 20% tax
    For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
    0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
    loop to solicit incomes and to report tax owed.The loop should terminate when
    the user enters a negative number or non-numeric input.
    */
    double a;
    double tex;
    while (cin >> a && a > 0)
    {
        if (a <= 5000)
        {
            tex = 0;
        }
        else if (a <= 5000 + 10000)
        {
            tex = (a - 5000) * 0.10;
        }
        else if (a <= 5000 + 10000 + 20000)
        {
            tex = 10000 * 0.10 + (a - 5000 - 10000) * 0.15;
        }
        else if (a > 35000)
        {
            tex = 10000 * 0.10 + 20000 * 0.15 + (a - 35000) * 0.20;
        }
        cout << "income is " << a << " and so tex is " << tex << endl;
    }

    return 0;
}
