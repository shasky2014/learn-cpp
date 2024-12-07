#include <base.h>
#include <string>

int main()
{
    string st1 = "0123456789abcdefj";
    cout << (st1.compare("0123456789abcdefj") == 0) << endl;
    cout << st1 << ",length=" << st1.length()
         << ",size=" << st1.size() << endl;
    int i, j;
    char temp;
    for (j = 0, i = st1.size() - 1; j < i; j++, i--)
    {
        cout << "i=" << i << ",j=" << j << endl;
        temp = st1[i];
        st1[i] = st1[j];
        st1[j] = temp;
    }
    cout << st1 << endl;
    cout << (st1.compare("jfedcba9876543210") == 0) << endl;
    return 0;
}
