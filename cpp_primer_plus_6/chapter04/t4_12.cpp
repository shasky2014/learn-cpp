#include <base.h>
#include <array>
#include <iterator>
#define printl(a)             \
    {                         \
        cout << "[";          \
        for (auto i : a)      \
        {                     \
            cout << i << " "; \
        }                     \
        cout << "]" << endl;  \
    }
struct fish
{
    string kind;
    int weight;
    float length;
};

void pointfish(fish f)
{
    cout << "fish{" << endl
         << "\tkind: " << f.kind << endl
         << "\tweight by angs: " << f.weight << endl
         << "\tlength by feets: " << f.length << endl
         << "}" << endl;
}
int main(int argc, char const *argv[])
{
    /* 1. 声明下述数据
    a. actor 是由 30 个char组成的数组
How would you declare each of the following?
a. actors is an array of 30 char.
b. betsie is an array of 100 short.
c. chuck is an array of 13 float.
d. dipsea is an array of 64 long double.
     */
    char actors[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

    cout << &actors << endl;
    cout << betsie << endl;
    cout << chuck << endl;
    cout << dipsea << endl;
    /*
    2. 使用array来完成问题1
     */
    array<char, 30> actors2;
    array<short, 100> betsie2;
    array<float, 13> chuck2;
    array<long double, 64> dipsea2;

    /*
    3. 声明一个包涵5个int元素的数组，并初始化为前5个正奇数
    */
    cout << "3. 声明一个包涵5个int元素的数组，并初始化为前5个正奇数" << endl;
    int odd[5] = {1, 3, 5, 7, 9};
    array<int, 5> odd2 = {1, 3, 5, 7, 9};
    // cout << odd2.at(1) << endl;
    printl(odd);

    cout << "4. 把问题3的数组的第一个元素和最后一个元素的和赋值给even" << endl;
    int even = odd[0] + odd[4];
    cout << odd[0] << "+" << odd[4] << "=" << even << endl;
    cout << "5. 显示float数组ideas中的第二个元素值" << endl;
    float ideas[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << ideas[1] << endl;
    printl(ideas);
    cout << "6. 声明char数组，并初始化为cheeseburger" << endl;
    char cheeseburger[20] = "cheeseburger";
    cout << cheeseburger << endl;
    // printl(ideas);
    cout << "7. 声明string对象，并初始化为Waldorf Salad" << endl;
    string ws = "Waldorf Salad";
    cout << ws << endl;
    cout << "8. 设计一个描述鱼的结构声明，结构中包含品种，重量（整数，单位盎司）和长度（英寸，包括小数）" << endl;

    fish af = {"Waldorf Salad", 3, 2.4};
    pointfish(af);
    cout << "10. 用enum定义一个Response的类型，包含yes，no，maybe，yes值为1，no为0，maybe为2" << endl;
    enum Response
    {
        Yes = 1,
        No = 0,
        Maybe = 2
    };
    Response r = Maybe;
    cout << "Response Maybe r=" << r << endl;

    return 0;
}
