#include <base.h>

int main(int argc, char const *argv[])
{
    const float e = 9.11e-31;
    cout << e * 3e32 + 2.52e7 << endl;

    // 赋值超出数值类型的范围，导致实际赋值异常。通常只复制右边的字节
    int a = 7e12;
    cout << a << endl;
    return 0;
}
