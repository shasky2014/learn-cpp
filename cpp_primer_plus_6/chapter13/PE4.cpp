#include <iostream>
#include <cstring>
#include "PE4_port.h"
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    Port *port = new Port("Baiwei", "ruby", 12);
    port->show();
    cout << *port << "\n";
    VintagePort *vp = new VintagePort("vintagePort", 12, "ox101", 1997);
    vp->show();
    cout << *vp << "\n";
    VintagePort vp1 = *vp;
    vp1.show();
    cout << vp1 << "\n";
    vp1 += 24;
    cout << vp1 << "\n";
    vp1 -= 10;
    cout << vp1 << "\n";

    return 0;
}
