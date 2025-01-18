#include <iostream>
#include "L1_tablenn.h"
TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht)
    : firstname(fn), lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}
