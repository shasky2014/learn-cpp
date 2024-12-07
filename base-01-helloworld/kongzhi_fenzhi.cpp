#include <iostream>
using namespace std;

int main()
{
    string line(20, '-');

    int a = 10;
    if (a > 10)
    {
        cout << "a>10" << endl;
    }
    else
    {
        cout << "a=" << a << endl;
    }

    cout << line << " if else end " << line << endl;

    cout << line << " switch case end " << line << endl;

    for (int i = 1; i <= 10; ++i)
    {
        switch (i)
        {
        case 8:
            cout << 8 << endl;
            break;
        case 10:
            cout << 10;
            cout << ",i==10, i+1=" << i + 1 << endl;
            break;
        default:
            cout << "default " << i << endl;
        }

        // cout << i << endl;
    }
}