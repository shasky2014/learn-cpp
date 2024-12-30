#include <iostream>
#include <cstring>
#include "PE6_move.h"

int main()
{
    Move m1(1.0, 2.0);
    Move m2(4.0, 3.0);
    m1.show();
    m2.show();

    Move m3 = m2.add(m1);
    m3.show();
    m3.reset();
    m3.show();

    return 0;
}
