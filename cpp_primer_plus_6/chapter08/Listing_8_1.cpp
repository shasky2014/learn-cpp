#include <base.h>

inline double sq(double x) { return x * x; }
int main(int argc, char const *argv[])
{
    double a, b;
    double c = 13;
    a = sq(5);
    b = sq(4.5 + 7);
    cout << "a = " << a << " ,b=" << b << " ,c=" << c << endl;
    cout << "sq(c++) = " << sq(c++) << endl;
    cout << "c = " << c << endl;
    return 0;
}
