#include <base.h>

/*
Write a program that asks the user to enter his or her age.The program then should
display the age in months:

Enter your age: 29
*/

int main()
{
    cout << ("Enter your age: ");
    int age;
    cin >> age;
    cout << ("Your age in months: ") << age * 12 << endl;
    return 0;
}