#include <base.h>
#include <array>
int main(int argc, char const *argv[])
{
    /*
    3. Write a program that asks the user to type in numbers.After each entry,
    the program should report the cumulative sum of the entries to date.
    The program should terminate when the user enters 0.
    */
    int a = 0;
    int sum = 0;

    cin >> a;

    while (a != 0)
    {
        sum = sum + a;
        cout << "sum: " << sum << endl;
        cin >> a;
    }

    return 0;
}
