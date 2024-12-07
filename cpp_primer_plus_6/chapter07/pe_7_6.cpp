#include <base.h>
/*
6. Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.
Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.
Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the
array, show the array, reverse all but the first and last elements of the array, and then
show the array.
*/
int Fill_array(double *, int);
void Show_array(const double *, int);
void Reverse_array(double *, int);
int main()
{
    double arr[10];
    int size = 10;
    size = Fill_array(arr, size);
    Show_array(arr, size);
    Reverse_array(arr + 1, size - 2);
    Show_array(arr, size);
    return 0;
}

int Fill_array(double *arr, int size)
{
    cout << "Enter up to " << size << " double values:" << endl;
    int i;
    double temp;
    for (i = 0; i < size; i++)
    {
        if (cin >> temp)
        {
            arr[i] = temp;
        }
        else
            break;
    }
    return i;
}
void Show_array(const double *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
};
void Reverse_array(double *arr, int size)
{
    int i, j;
    double temp;
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
};
