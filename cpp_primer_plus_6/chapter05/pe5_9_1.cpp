#include <base.h>
int main(int argc, char const *argv[])
{
    /*
    1. Write a program that requests the user to enter two integers.The program should
    then calculate and report the sum of all the integers between and including the two
    integers.At this point, assume that the smaller integer is entered first. For example, if
    the user enters 2 and 9, the program should report that the sum of all the integers
    from 2 through 9 is 44.
    */
    int a, b, sum = 0;
    cout << "Enter two integers: ";

    cin >> a >> b;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << "Sum of all integers between " << a << " and " << b << " is " << sum << endl;

    return 0;
}
