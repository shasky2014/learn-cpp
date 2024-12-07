#include <base.h>
int main()
{
    int i;

    for (i = 3; i > 0; i--)
    {
        cout << "i=" << i << " for loop" << endl;
    }
    cout << "i=" << i << " for loop end" << endl;

    for (i = 3; i > 0; --i)
    {
        cout << "i=" << i << " for loop" << endl;
    }
    cout << "i=" << i << " for loop end" << endl;

    cout << "(i>0)=" << (i > 0) << endl;
    cout << "(i<0)=" << (i < 0) << endl;
    cout.setf(ios_base::boolalpha);
    cout.setf(ios::boolalpha);
    cout << "(i>0)=" << (i > 0) << endl;
    cout << "(i<0)=" << (i < 0) << endl;
    cout << "(bool)0=" << (bool)0 << endl;
    cout << "(bool)1=" << (bool)1 << endl;
    cout.setf(ios_base::adjustfield);
    cout << "(i>0)=" << (i > 0) << endl;
    cout << "(i<0)=" << (i < 0) << endl;
    return 0;
}
