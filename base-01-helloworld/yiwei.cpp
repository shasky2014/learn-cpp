#include <iostream>
#include <bitset>

using namespace std;
// #define sum(x, y) ((x) + (y))
// #define square(x) ((x) * (x))
int main()
{
    string line(40, '-');

    int a = -3;
    cout << "a=\t" << a << endl
         << "bit a=\t" << bitset<32>(a) << endl;
    cout << "hex a=\t" << hex << a << endl;
    cout << "oct a=\t" << oct << a << endl;
    cout << line << endl;
    int b = a << 2;

    cout << "b=\t" << b << endl;
    cout << "bit b=\t" << bitset<32>(b) << endl;
    cout << line << endl;
    int c = a >> 2;

    cout << "c=\t" << c << endl;
    cout << "bit c=\t" << bitset<32>(c) << endl;

    int d = a | 42;
    cout << "d=\t" << d << endl;
    cout << "bit d=\t" << bitset<32>(d) << endl;
    cout << "bit 42=\t" << bitset<32>(42) << endl;
    cout << line << endl;

    int e = a ^ 42;
    cout << "bit a=\t" << bitset<32>(a) << endl;
    cout << "bit 42=\t" << bitset<32>(42) << endl;
    cout << "bit e=\t" << bitset<32>(e) << endl;
    cout << "e=a^42=\t" << e << endl;
    cout << line << endl;
    int f = ~a;
    cout << "bit a=\t" << bitset<32>(a) << endl;
    cout << "bit f=\t" << bitset<32>(f) << endl;
    cout << "f=\t" << sizeof(f) << endl;
    cout << "f=\t" << f << endl;
}
