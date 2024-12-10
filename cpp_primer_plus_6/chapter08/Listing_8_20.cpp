#include <string>
#include <array>
#include <cstring>
#include <typeinfo>
#include <base.h>
// decltype
// typeid

int sum(int a, int b)
{
    return a + b * 2;
}

int main()
{
    long i = 42;
    double d = i;
    double &t = d;

    decltype(i) v1 = 42;
    decltype(t) v2 = d;
    decltype((t)) v3 = t;
    decltype(t) v4 = d;
    decltype(d * 0.2) v5 = d;
    // decltype(sum) v6 = sum;
    cout << "v1:" << *typeid(v1).name() << endl;
    cout << "v2:" << *typeid(v2).name() << endl;
    cout << "v3:" << *typeid(v3).name() << endl;
    cout << "v4:" << *typeid(v4).name() << endl;
    cout << "v5:" << *typeid(v5).name() << endl;
    // cout << "v6:" << *typeid(v6).name() << endl;
    return 0;
}
