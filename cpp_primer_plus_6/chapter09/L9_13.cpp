#include <iostream>
#include "L9_11_namesp.h"

void other(void);
void another(void);
int main(int argc, char const *argv[])
{
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"Benny", "Goatsniff"}, 300};
    showDebt(golf);
    other();
    another();
    // sum();
    return 0;
}
void other(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodles", "Goober"};
    showPerson(dg);
    cout << endl;
    Debt zi[3];
    int i;
    for (i = 0; i < 3; i++)
        getDebt(zi[i]);
    for (i = 0; i < 3; i++)
    {
        showDebt(zi[i]);
    }
    cout << "Total debt: $" << sumDebts(zi, 3) << endl;
}

void another(void)
{
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    showPerson(collector);
    std::cout << std::endl;
}