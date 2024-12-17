#include <iostream>
#include "L9_11_namesp.h"
namespace pers
{
    using std::cin;
    using std::cout;
    void getPerson(Person &rp)
    {
        cout << "Enter first name: ";
        getline(cin, rp.fname);
        cout << "Enter last name: ";
        getline(cin, rp.lname);
    }
    void showPerson(const Person &a)
    {
        cout << a.lname << ", " << a.fname;
    }
}
namespace debts
{
    using std::cin;
    using std::cout;
    using std::endl;
    void getDebt(Debt &d)
    {
        getPerson(d.name);
        cout << "Enter debt: ";
        cin >> d.amount;
        cin.get();
    }
    void showDebt(const Debt &d)
    {
        showPerson(d.name);
        cout << ": $" << d.amount << endl;
    }
    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for (int i = 0; i < n; i++)
            total += ar[i].amount;
        return total;
    }
}