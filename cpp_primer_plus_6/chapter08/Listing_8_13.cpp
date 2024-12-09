#include <string>
#include <array>
#include <cstring>
#include <base.h>
// 模板函数
template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template <typename T>
void Swap(T *a, T *b, int n)
{
    T temp;
    int i = 0;
    while (b[i])
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        i++;
    }
};

struct job
{
    string name;
    double salary;
    int floor;
};
void show(job &j)
{
    cout << j.name << " "
         << j.salary << " " << j.floor << endl;
};

template <>
void Swap<job>(job &a, job &b)
{
    job temp = a;
    a.salary = b.salary;
    a.floor = b.floor;
    b.salary = temp.salary;
    b.floor = temp.floor;
}

void show(const int a[], int arr_size)
{
    // int arr_size = ;
    for (int i = 0; i < arr_size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
};
int main(int argc, char const *argv[])
{
    // string  swap
    string a = "template";
    string b = "swap";
    cout << "origin" << endl;
    cout << "a=" << a << endl
         << "b=" << b << endl;
    cout << "Swap" << endl;
    Swap(a, b);
    cout << "a=" << a << endl
         << "b=" << b << endl;

    // int [] swap,
    int t[] = {1, 2, 3, 4, 0};
    int p[] = {5, 6, 7, 8, 9};
    cout << size(t) << endl;
    cout << "origin" << endl;
    cout << "t=";
    show(t, 5);
    cout << "p=";
    show(p, 5);
    cout << "Swap t,p" << endl;
    Swap(t, p, 5);
    cout << "t=";
    show(t, 5);
    cout << "p=";
    show(p, 5);

    // job Swap
    job neon = {"neon", 2300, 3};
    job alisa = {"alisa", 5000, 9};
    cout << "origin" << endl;
    show(neon);
    show(alisa);
    cout << "Swap neon, alisa" << endl;
    Swap(neon, alisa);
    show(neon);
    show(alisa);
    return 0;
}
