#include <string>
#include <array>
#include <cstring>
#include <base.h>
/***
6. Write a template function maxn() that takes as its arguments an array of items of
type T and an integer representing the number of elements in the array and that
returns the largest item in the array.Test it in a program that uses the function tem-
plate with an array of six int value and an array of four double values.The pro-
gram should also include a specialization that takes an array of pointers-to-char as
an argument and the number of pointers as a second argument and that returns the
address of the longest string. If multiple strings are tied for having the longest
length, the function should return the address of the first one tied for longest.Test
the specialization with an array of five string pointers.
*/
template <typename T>
T maxn(T arr[], int n)
{
    T max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

template <>
const char *maxn<const char *>(const char *arr[], int n)
{
    const char *max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (strlen(arr[i]) > strlen(max))
            max = arr[i];
    }
    return max;
}
int main(int argc, char const *argv[])
{
    int l5[] = {1, 12, 5, 7};
    double d5[] = {1.0, -12, 5.2, 0.7, -2.0, 3.7};
    int max_l = maxn(l5, size(l5));
    double max_d = maxn(d5, size(d5));
    cout << "max_l: " << max_l << endl;
    cout << "max_d: " << max_d << endl;
    const char *arr[] = {
        "hello",
        "osihfubdsavasafsafeqgbrqejt234",
        "ttkdsubdsavasafsafeqgbrqejt234",
        "osihfubdsa asdaf",
        "osihfubdsafsageagwvs"};
    const char *max_c = maxn(arr, size(arr));
    cout << "max_c: " << max_c << endl;

    return 0;
}
