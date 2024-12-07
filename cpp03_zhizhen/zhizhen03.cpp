#include <..\\base\\base.h>

void my_swap(int *a, int *b)
{
    // 参数接收两个指针变量
    int t;
    // 获取其中一个指针变量所指向的变量实际内容，取出来给t
    t = *a;
    // 把另一个*b指针指向变量的实际内容给到a变量
    *a = *b;
    // 把临时保存的t给到*b
    *b = t;
}
void my_swap2(int a, int b)
{
    // 这交换只在函数内生效，出了这个函数体就不变了
    cout << "in my_swap2" << endl;
    cout << "a=" << a << ",b=" << b << endl;
    int t;
    t = a;
    a = b;
    b = t;
    cout << "a=" << a << ",b=" << b << endl;
    cout << "out my_swap2" << endl;
}

int main()
{
    // 调用后，main 函数中 a 变量的值变为 10，b 变量的值变为 6
    //  用&b获取变量b对应的指针
    // 用 *b 获取指针b对应的变量的内容
    int a = 6, b = 10;
    my_swap(&a, &b);
    cout << "a=" << a << ",b=" << b << endl;
    my_swap2(a, b);
    cout << "a=" << a << ",b=" << b << endl;
}
