#include <..\\base\\base.h>

int main()
{
    int a = 123; // a: 123
    cout << "a=" << a << endl;
    int *pa = &a;
    *pa = 321; // a: 321
    cout << "a=" << a << endl;
    cout << "pa=" << pa << endl;
    cout << "*pa=" << *pa << endl;
    cout << "&a=" << &a << endl;
}
