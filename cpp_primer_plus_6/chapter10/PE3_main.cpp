#include <iostream>
#include <cstring>
#include "PE3_golf.h"

int main(int argc, char const *argv[])
{
    Golf g1("kanyon", 90);
    g1.show();
    g1.setgolf();
    g1.show();

    Golf g2[3];
    for (int i = 0; i < 3; i++)
    {
        g2[i].setgolf();
    }

    for (int i = 0; i < 3; i++)
    {
        g2[i].show();
    }

    return 0;
}
