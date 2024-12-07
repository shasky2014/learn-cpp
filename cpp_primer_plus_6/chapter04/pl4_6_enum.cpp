#include <base.h>

enum spectrum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo,
    ultraviolet
};
int main()
{
    spectrum color = blue;
    cout << color << endl;
    int color2 = red;
    cout << color2 << endl;
    int color3 = red + 4;
    cout << color3 << endl;

    // color = red + green;

    return 0;
}
