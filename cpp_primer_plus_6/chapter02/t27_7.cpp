#include <base.h>

/*
Write a program that asks the user to enter an hour value and a minute value.The

main() function should then pass these two values to a type void function that displays
 the two values in the format shown in the following sample run:

Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
*/

void printTime(int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute << endl;
}

int main()
{
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    printTime(hour, minute);
    return 0;
}
