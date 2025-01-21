#include <iostream>
#include <cstring>
#include "PE2_cd.h"
using std::cin;
using std::cout;
using std::endl;
using std::strcpy;
void Bravo(const CD &disk)
{
    disk.Report();
}
int main()
{
    CD c1("Beatles", "Capitol", 14, 35.5);
    ClassicCD c2 = ClassicCD("Piano Sonata in B flat, Fantasia in C",
                             "Alfred Brendel", "Philips", 2, 57.17);
    CD *pcd = &c1;
    cout << "**** Using object directly[" << &c1 << "]: ****\n";
    c1.Report(); // use Cd method
    cout << "**** Using object directly[" << &c2 << "]: ****\n";
    c2.Report(); // use Classic method
    cout << "**** Using type cd * pointer to objects[" << pcd << "]: ****\n";
    pcd->Report(); // use Cd method for cd object
    pcd = &c2;
    cout << "**** Using type cd * pointer to objects[" << pcd << "]: ****\n";
    pcd->Report(); // use Classic method for classic object
    cout << "**** Calling a function with a Cd reference argument: ****\n";
    Bravo(c1);
    Bravo(c2);
    ClassicCD copy;
    cout << "**** Testing assignment[" << &copy << "]: ****\n";
    copy.Report();
    copy = c2;
    cout << "**** Testing assignment[" << &copy << "]: ****\n";
    copy.Report();
    return 0;
}
