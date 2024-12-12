#include <base.h>
#include <string>
#include <cstring>
/***
5. Write a template function max5() that takes as its argument an array of five items
of type T and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.
*/
const int SIZE = 5;
template <typename T>
T max5(T arr[SIZE])
{
    T max = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main(int argc, char const *argv[])
{
    int l5[] = {1, 13, 5, 7, 0};
    double d5[] = {1.0, -12, 5.3, 0.7, -2.0};
    int max_l = max5(l5);
    double max_d = max5(d5);
    cout << "max_l: " << max_l << endl;
    cout << "max_d: " << max_d << endl;
    return 0;
}
