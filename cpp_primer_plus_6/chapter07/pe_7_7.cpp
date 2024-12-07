#include <base.h>
/*
7. Redo Listing 7.7, modifying the three array-handling functions to each use two
pointer parameters to represent a range.The fill_array() function, instead of
returning the actual number of items read, should return a pointer to the location
after the last location filled; the other functions can use this pointer as the second
argument to identify the end of the data.
*/
double *fill_array(double *, int);
void show_array(const double *from_pt, const double *end_pt);
void revalue(double *from_pt, double *end_pt, double r);
int main()
{
    double arr[10];
    int size = 10;
    double *end_pf;
    end_pf = fill_array(arr, size);
    show_array(arr, end_pf);
    revalue(arr, end_pf, 2);
    show_array(arr, end_pf);
    return 0;
}

double *fill_array(double *arr, int size)
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
    return arr + i;
}
void show_array(const double *from_pt, const double *end_pt)
{
    const double *i;
    for (i = from_pt; i != end_pt; i++)
    {
        cout << *i << ' ';
    }
    cout << endl;
};
void revalue(double *from_pt, double *end_pt, double r)
{
    double *i;
    for (i = from_pt; i != end_pt; i++)
    {
        *i = *i * r;
    }
};
