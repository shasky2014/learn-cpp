#include <iostream>
#include <cstring>
#include "PE9_6_1_golf.h"

int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using std::strcmp;
    golf gs[3];
    for (golf &g : gs)
    {
        int q = setgolf(g);
        if (q == 0)
            break;
    }
    showgolf(gs[0]);
    handicap(gs[0], 30);
    showgolf(gs[0]);

    return 0;
}
