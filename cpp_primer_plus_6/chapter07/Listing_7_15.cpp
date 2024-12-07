#include <cmath>
#include <string>
#include <array>
#include <base.h>

const int Seasons = 4;
const array<string, Seasons> SNames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons> *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << SNames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
};
void show(const array<double, Seasons> *pa)
{
    double total = 0.0;
    cout << "EXPENSES" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << SNames[i] << " Expenses: $" << (*pa)[i] << endl;
        total += (*pa)[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
int main(int argc, char const *argv[])
{
    array<double, Seasons> pa;
    fill(&pa);
    show(&pa);
    return 0;
}
