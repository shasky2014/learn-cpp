#include <base.h>

int main()
{
    int a[10] = {3, 2, 5, 9, 7, 1, 4, 6, 8, 0};
    cout << "origainal list: " << a << endl;

    for (int n : a)
    {
        cout << n << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cout << endl
             << i << ":";

        for (int n : a)
        {
            cout << n << " ";
        }
    }
    cout << endl
         << "final list: " << endl;
    for (int n : a)
    {
        cout << n << " ";
    }
}