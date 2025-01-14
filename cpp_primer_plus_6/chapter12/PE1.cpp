#include <iostream>
#include <cstring>
#include "PE1_cow.h"
using namespace std;
int main(int argc, char const *argv[])
{
    cow c1;
    c1.show();
    cow c2("cow2", "cow2", 2);
    c2.show();
    cow c3 = c2;
    c3.show();
    c1 = c2;
    c1.show();
    cow c4(c2);
    c4.show();
    return 0;
}
