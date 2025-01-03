#include <iostream>
#include "PE3.h"
using std::cin;
using std::cout;
using std::endl;
using namespace mycomplex;
int main(int argc, char const *argv[])
{
    complex l[] = {{0, 1}, {1, 0}, {0, 0}, {-1, 0}, {0, -1}, {1, 1}, {2, 1}, {0, -5}, {0, 5}, {2, -5}, {2, 5}, {-2, -5}, {-2, 5}};
    for (complex t : l)
    {
        cout << t << endl;
    }
    complex a(3.0, 4.0); // initialize to (3,4i)

    complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c)
    {
        cout << "c is " << c << '\n';
        cout << "~c is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout
            << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}
