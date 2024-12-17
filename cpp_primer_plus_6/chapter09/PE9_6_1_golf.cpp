#include <iostream>
#include <cstring>
#include "PE9_6_1_golf.h"

void setgolf(golf &g, const char *name, int lnc)
{
    using std::strcpy;
    strcpy(g.fullname, name);
    g.handicap = lnc;
}
int setgolf(golf &g)
{
    using std::cin;
    using std::cout;
    using std::strlen;
    cout << "Enter full name: ";
    cin.getline(g.fullname, Len);
    if (strlen(g.fullname) == 0)
        return 0;
    cout << "Enter handicap: ";
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf &g, int lnc)
{
    g.handicap = lnc;
}
void showgolf(const golf &g)
{
    std::cout << g.fullname << ": " << g.handicap << std::endl;
}