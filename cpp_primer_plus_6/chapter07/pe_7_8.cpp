#include <base.h>
/*
8. Redo Listing 7.15 without using the array class. Do two versions:
a. Use an ordinary array of const char * for the strings representing the sea-
son names, and use an ordinary array of double for the expenses.
b. Use an ordinary array of const char * for the strings representing the sea-
son names, and use a structure whose sole member is an ordinary array of
double for the expenses. (This design is similar to the basic design of the
array class.)
*/
const int Seasons = 4;
const char SNames[Seasons][20] = {"Spring", "Summer", "Fall", "Winter"};
struct yearly_expenses
{
    double expenses[Seasons];
};

void fill(yearly_expenses *y)
{
    ;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << SNames[i] << " expenses: ";
        cin >> (*y).expenses[i];
    }
}
void show(const yearly_expenses *y)
{
    double total = 0.0;
    for (int i = 0; i < Seasons; i++)
    {
        cout << SNames[i] << " Expenses: $" << (*y).expenses[i] << endl;
        total = (*y).expenses[i] + total;
    }
    cout << "Total Expenses: $" << total << endl;
}

int main()
{
    yearly_expenses *y;
    fill(y);
    show(y);
    return 0;
}
