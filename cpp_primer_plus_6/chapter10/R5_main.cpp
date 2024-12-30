#include <iostream>
#include <string>
#include "R5_Account.h"

using namespace R5;
using namespace std;
int main(int argc, char const *argv[])
{
    B_Account mine = {"neon"};
    mine.show();
    mine.depositing(100);
    mine.show();
    mine.withdrawing(200);
    mine.show();
    mine.withdrawing(50);

    B_Account bank_acounts[3];
    string new_name;
    double deposit;
    double new_withdraw;
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter a name: ";
        getline(cin, new_name);
        bank_acounts[i].rename(new_name);
        cout << "Please depositing: ";
        cin >> deposit;
        cin.get();
        bank_acounts[i].depositing(deposit);
    }
    for (int i = 0; i < 3; i++)
    {
        bank_acounts[i].show();
    }
    return 0;
}
