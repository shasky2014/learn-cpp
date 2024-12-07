#include <base.h>
void cheers(int);
double cube(double);
double probability(unsigned int n, unsigned int m);
int sum_arr(int arr[], int size);
int sum_array(const int *, const int *);
int main()
{
    cheers(5);
    cout << cube(1.2) << endl;
    cout << probability(17, 6) << endl;
    cout << probability(38, 6) << endl;
    cout << probability(51, 6) << endl;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sum_arr(arr, 10) << endl;
    cout << sum_array(arr + 2, arr + 8) << endl;

    return 0;
}

void cheers(int a)
{
    for (int i = 0; i < a; i++)
        cout << "Cheers!  ";
    cout << endl;
}

double cube(double b)
{
    return b * b * b;
}

double probability(unsigned int num, unsigned int picks)
{
    double result = 1.0;
    while (picks > 0)
    {
        result = result * num / (double)picks;
        num--;
        picks--;
    }
    return result;
}

int sum_arr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + arr[i];
    return sum;
}

int sum_array(const int *b, const int *e)
{
    cout << "begin: " << b << " end: " << e << endl;
    int sum = 0;
    const int *i = b;
    /*
       这里的const只是保证无法通过*i来修改其指向数据*b，
       而*b也是const的，在sumarray里也无法修改，*b对应的值，
       但是i++可以修改其指针的值，可以认为i++就是将i指向下一个数据
    */
    for (i = b; i != e; i++)
    {
        sum += *i;
        cout << "i=" << i << "  *i=" << *i << endl;
    }
    return sum;
}
