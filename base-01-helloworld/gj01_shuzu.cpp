#include <base.h>

int arr[8]; // 数组 arr 的下标范围是 [0, 1001)

int main()
{
    int n;
    cin >> n;
    // 通过输入一个数字来确定数组的长度
    cout << "1. arr = " << arr << endl;
    for (int i = 1; i <= n; ++i)
    {
        // 通过for循环n次来读取数据写入到数组的对应位置
        cin >> arr[i];
    }
    cout << "2. arr = " << arr << endl;
    int out = 0;

    for (int i = 1; i <= n; ++i)
    {
        // 读取数组内容输出到命令行
        cout << i << ":" << arr[i] << endl;
        out = out + arr[i];
    }
    cout << "sum arr = " << out << endl;
    cout << "avg arr = " << (double)out / n << endl;

    cout << "3. arr = " << arr << endl;

    int ind = 0;

    for (int i : arr)
    {
        cout << "arr[" << ind << "] = " << i << endl;
        ind++;
    }
    return 0;
}
