#include <iostream>
#include "L2_tablenn.h"
int main(int argc, char const *argv[])
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    RatedPlayer player2(1, "Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable())
        cout << ": has a table" << endl;
    else
        cout << ": hasn't a table" << endl;
    player2.Name();
    cout << ",Rating:" << player2.Rating();
    if (player2.HasTable())
        cout
            << ": has a table" << endl;
    else
        cout << ": hasn't a table" << endl;
    TableTennisPlayer player3 = player2;
    player3.Name();
    return 0;
}
