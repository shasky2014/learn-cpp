#include <base.h>
#include <array>
int main(int argc, char const *argv[])
{
    /*
    2. Redo Listing 5.4 using a type array object instead of a built-in array and type
    long double instead of long long. Find the value of 100!
    */
    array<long double, 101> a;
    cout << a.size() << endl;

    a[1] = a[0] = 1;
    for (int i = 2; i <= 100; i++)
    {
        a[i] = a[i - 1] * i;
    }

    for (int i = 0; i <= 101; i++)
        cout
            << i << "\t" << a[i] << endl;
    return 0;
}
