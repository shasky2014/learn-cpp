#include <iostream>
#include <string>
#include <valarray>

#include "PL1_student.h"

using std::cin;
using std::cout;
int main(int argc, char const *argv[])
{
     Student a;
     cout << a << "\n"
          << "Average:" << a.Average() << "\n";
     cin >> a;
     cout << a << "\n"
          << "Average:" << a.Average() << "\n";
     return 0;
}
