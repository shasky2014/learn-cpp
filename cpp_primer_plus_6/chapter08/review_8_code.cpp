#include <base.h>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show_box(const box &b)
{
    cout << "maker: " << b.maker << " volume: " << b.volume << endl;
    cout << "h*w*l: " << b.height << "*" << b.width << "*" << b.length << endl;
}
void set_box(box &b)
{
    b.volume = b.height * b.width * b.length;
}

struct worker
{
    string name;
    string description;
    int work_age;
    int salary;
};
void show_worker(const worker &b)
{
    cout << "worker: " << b.name << ", job description: " << b.description << endl;
    cout << "work_age: " << b.work_age << ", salary:" << b.salary << endl;
}

template <typename T>
T bigger(T a, T b)
{
    return a > b ? a : b;
};

template <typename T>
const T bigger(const T *a, const T *b)
{
    return *a > *b ? *a : *b;
};
/**
 * 函数模板这里有点问题，我想对指定的类型执行特殊的比较逻辑，
 * 比如 struct box,比较其volume；
 * struct worker,比较其work_age；
 * 但是，函数模板的具体化实现无法通过编译，错误的原因是在调用函数时依然调用基础的模板函数生成的函数。
 * 这里只能使用函数重载来完成该比较功能。
 */

// 函数模板的显式具体化， 编译失败？？？
template <>
const box bigger<box>(const box *a, const box *b)
{
    if ((*a).volume > (*b).volume)
        return *a;
    else
        return *b;
}
const box bigger(const box &a, const box &b)
{
    cout << "bigger function reload" << endl;
    if (a.volume > b.volume)
        return a;
    else
        return b;
}
// 函数模板的显示实例化， 也编译失败？？？
template <>
worker bigger<worker>(worker a, worker b)
{
    if (a.work_age > b.work_age)
        return a;
    else
        return b;
}

int main(int argc, char const *argv[])
{

    cout << bigger(4, 8) << endl;
    cout << bigger<float>(3.8, -8) << endl;
    cout << bigger<char>('k', '0') << endl;

    box b = {"tt", 3, 5, 7};
    box a = {"kk", 2, 5, 8};
    set_box(a);
    set_box(b);
    show_box(a);
    show_box(b);
    cout << "show the bigger box" << endl;
    show_box(bigger<box>(&a, &b));
    show_box(bigger(a, b));

    worker w1 = {"li", "manager", 10, 50000};
    worker w2 = {"jone", "chacker", 3, 5000};
    show_worker(w1);
    show_worker(w2);
    cout << "show the bigger worker" << endl;
    show_worker(bigger<worker>(w1, w2));

    return 0;
}
