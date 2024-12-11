#include <string>
#include <array>
#include <cstring>
#include <base.h>

/***
7. Modify Listing 8.14 so that it uses two template functions called SumArray() to
return the sum of the array contents instead of displaying the contents.The program
now should report the total number of things and the sum of all the debts.
*/
template <typename T>
T SumArray(T arr[], int n)
{
    T sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

template <typename T>
T SumArray(T *arr[], int n)
{
    T sum = *arr[0];
    for (int i = 1; i < n; i++)
    {
        sum += *arr[i];
    }
    return sum;
}

struct debats
{
    string name;
    double debt;
};

int main()
{
    int things[] = {1, 12, 5, 7};
    int sum1 = SumArray(things, size(things));
    cout << "things sum: " << sum1 << endl;

    debats mr_e[] = {
        {"Iam Wolfe", 2400.2},
        {"Ura Foxe", 1300},
        {"Iby Scout", 1800},
    };
    // double指针数组
    double *pd[3];
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_e[i].debt;
    }

    double sum2 = SumArray(pd, size(pd));
    cout << "mr_e's debats sum: " << sum2 << endl;

    return 0;
}
