#include <base.h>

void foo(int &x, int &y, int &out)
{
    // x,y,out,在函数内改变后都会影响到函数调用之后的结果
    x = x * 2;
    y = y + 3;
    out = x + y;
}
void foo2(int x, int y, int &out)
{
    // 仅对out在函数内改变后会影响到函数调用之后的结果
    // 而x,y的计算结果不会传到函数调用之后
    x = x * 2;
    y = y + 3;
    out = x + y;
}

int main()
{
    // 输入参数
    int a = 1;
    int b = 1;
    // 输出结果
    int c = 0;

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    foo2(a, b, c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    foo(a, b, c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    foo2(a, b, c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}
