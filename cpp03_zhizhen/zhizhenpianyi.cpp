#include <base.h>
struct ThreeInt
{
    int a;
    int b;
    int c;
};
void print_list(int a[], string name)
{
    int size = sizeof(a) / sizeof(a[0]);
    cout << name << ":size=" << size << ":{";
    for (int i = 0; i <= size; i++)
    {
        cout << a[i];
        if (i < size)
        {
            cout << ",";
        }
    }
    cout << "}" << endl;
}
void print_TI(ThreeInt x, string name)
{
    cout << name << "=ThreeInt:{" << endl
         << "    a=" << x.a << endl
         << "    b=" << x.b << endl
         << "    c=" << x.c << endl
         << "}" << endl;
}

int main()
{
    ThreeInt x{1, 2, 3}, y{6, 7, 8};
    print_TI(x, "x");
    int *p = &x.a;
    cout << "x.a=" << x.a << endl;
    cout << "x.a= \t*p\t=" << *p << endl;
    cout << "x.b= \t*(p+1)\t=" << *(p + 1) << endl;
    cout << "x.c= \t*(p+2)\t=" << *(p + 2) << endl;
    *(p + 2) = 10;
    print_TI(x, "x");
    cout << "-----------" << endl;
    int a[3] = {1, 2, 3};
    print_list(a, "a");
    int *q = a;
    cout << "a[0]=" << "\t*p\t=" << *q << endl;
    cout << "a[1]=" << "\t*(p+1)\t=" << *(q + 1) << endl;
    cout << "a[2]=" << "\t*(p+2)\t=" << *(q + 2) << endl;

    *(q + 2) = 10;
    cout << "a[0]=" << (a[0]) << " ";
    cout << "a[1]=" << (a[1]) << " ";
    cout << "a[2]=" << (a[2]) << endl;
}