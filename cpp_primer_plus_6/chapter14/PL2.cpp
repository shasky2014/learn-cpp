#include <iostream>
#include <string>
#include <valarray>

#include "PL2_student.h"

using std::cin;
using std::cout;
int main(int argc, char const *argv[])
{
     Student a("null", 3);
     cout << a << "\n"
          << "Average:" << a.Average() << "\n";
     cin >> a;
     cout << a << "\n"
          << "Average:" << a.Average() << "\n";
     return 0;
}
