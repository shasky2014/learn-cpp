#include <iostream>
#include <new>
using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main(int argc, char const *argv[])
{
    double *pd1, *pd2;
    int i;
    pd1 = new double[N];
    pd2 = new (buffer) double[N];
    for (i = 0; i < N; i++)
    {
        pd1[i] = pd2[i] = 100 + 60 * i;
    }

    cout << "Memory addresses:\n"
         << "   heap = " << pd1
         << "   static = " << (void *)buffer
         << "   buffer = " << buffer << endl;
    cout << "pd1[i]     at  &pd1[i];\t   pd2[i]      at  &pd2[i]" << endl;

    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << " ; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }
    cout << "pd3[i]     at  &pd3[i];\t   pd4[i]      at  &pd4[i]" << endl;
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << " ; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }

    delete[] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N];
    for (i = 0; i < N; i++)
    {
        pd1[i] = pd2[i] = 1000 + 60 * i;
    }

    cout << "pd1[i]     at  &pd1[i];\t   pd2[i]      at  &pd2[i]" << endl;
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << " ; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    return 0;
}
