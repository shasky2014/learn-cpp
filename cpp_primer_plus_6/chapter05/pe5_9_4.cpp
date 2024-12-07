#include <base.h>
#include <array>
int main(int argc, char const *argv[])
{
    /*
    4. Daphne invests $100 at 10% simple interest.That is, every year,
    the investment earns 10% of the original investment,
    or $10 each and every year: interest = 0.10 × original balance
    At the same time, Cleo invests $100 at 5% compound interest.That is,
    interest is 5% of the current balance, including previous additions of interest:
    interest = 0.05 × current balance
    Cleo earns 5% of $100 the first year, giving her $105.
    The next year she earns 5% of $105, or $5.25, and so on.

    Write a program that finds how many years it takes for
    the value of Cleo’s investment to exceed the value of Daphne’s investment and then
    displays the value of both investments at that time.
    */
    float simple_interest = 0.1;
    float compound_interest = 0.05;

    float Daphne_invests = 100;
    float Daphne_invests_now = Daphne_invests;

    float Cleo_invests = 100;
    float Cleo_invests_now = Cleo_invests;
    cout << "Begin"
         << "\tDaphne:\t" << Daphne_invests_now
         << "\tCleo:\t" << Cleo_invests_now << endl;

    int years = 1;
    while (Cleo_invests_now <= Daphne_invests_now)
    {
        Daphne_invests_now = Daphne_invests_now + Daphne_invests * simple_interest;
        Cleo_invests_now = Cleo_invests_now * (1 + compound_interest);
        cout << years
             << "\tDaphne:\t" << Daphne_invests_now
             << "\tCleo:\t" << Cleo_invests_now << endl;
        ++years;
    }

    return 0;
}
