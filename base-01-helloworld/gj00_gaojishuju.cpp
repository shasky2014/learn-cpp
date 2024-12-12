#include <iostream>
#include <base.h>

using namespace std;
int main()
{
    // const 用来定义一个常量
    const int a = 42;
    int arr1[a];
    // int long float 等数据类型直接来用是一个变量，无法用来对数组长度进行定义
    unsigned int b = 42;
    // int arr2[b];
    cout << "b=" << b << endl;
    b = 43;
    cout << "b=" << b << endl;
}