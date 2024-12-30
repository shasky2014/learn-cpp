#include <iostream>
#include <cstring>
#include "PE7_plorg.h"

int main()
{
    using namespace std;

    Plorg p0;
    p0.show();

    Plorg p1("linggsdf");
    Plorg p2("kklsdl", 60);
    p1.show();
    p2.show();
    p2.update(70);
    p2.show();
    Plorg ps[3];

    char name[19];
    int ci;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name and ci: ";
        cin.getline(name, 19);
        cin >> ci;
        cin.get();
        ps[i] = Plorg(name, ci);
    }

    for (int i = 0; i < 3; i++)
    {
        ps[i].show();
    }

    return 0;
}
