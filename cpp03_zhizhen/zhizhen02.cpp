#include <..\\base\\base.h>
#include <list>
#define NAME(variable) (#variable)

struct ThreeInt
{
    int a;
    int b;
    int c;
};

void print_TI(ThreeInt x, string name)
{
    cout << name << " {" << endl
         << "    a=" << x.a << endl
         << "    b=" << x.b << endl
         << "    c=" << x.c << endl
         << "}" << endl;
}

int main()
{
    ThreeInt x{1, 2, 3}, y{6, 7, 8};
    print_TI(x, "x");
    print_TI(y, "y");
    ThreeInt *px = &x;
    (*px) = y; // x: {6,7,8}
    print_TI(x, "x2");
    (*px).a = 4; // x: {4,7,8}
    print_TI(x, "x3");
    px->b = 5; // x: {4,5,8}
    print_TI(x, "x4");

    int a[3] = {1, 2, 3};
    int ind = 0;
    for (int i : a)
    {
        cout << "a[" << ind << "]=" << i << endl;
        ind++;
    }
    // print_list(a);
    int *p = a; // p 指向 a[0]
    *p = 4;     // a: [4, 2, 3]
    p = p + 1;  // p 指向 a[1]
    *p = 5;     // a: [4, 5, 3]
    p++;        // p 指向 a[2]
    *p = 6;     // a: [4, 5, 6]
}
