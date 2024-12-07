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
    /*listing 8.2 引用，不同于指针，引用只是别名，只能在引用时定义，无法通过赋值修改引用对象
     */
    int rats = 20093;
    int &rodents = rats;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "do rodents++ " << endl;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;
    int bats = 50093;
    rodents = bats;
    cout << "do rodents = bats " << endl;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "bats = " << bats << endl;
    cout << "rats address = " << &rats << endl;
    cout << "bats address = " << &bats << endl;
    cout << "rodents address = " << &rodents << endl;
    return 0;
}
