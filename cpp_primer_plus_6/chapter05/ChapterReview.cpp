#include <base.h>
int main(int argc, char const *argv[])
{
    int j = 5;
    while (++j < 9)
    {
        cout << j++ << endl;
    }

    int k = 8;
    do
    {
        cout << "k=" << k << endl;
    } while (k++ < 10);

    int i = 1;
    for (int j = 0; j < 8; j++)
    {
        cout << i << " ";
        i = i * 2;
    }
    cout << endl;
    int x = (1, 238);
    cout << x << endl;
    // int y = 1, 024;
    // cout << y << endl;
    return 0;
}
