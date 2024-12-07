#include <base.h>
#include <string>
#include <array>

int main(int argc, char const *argv[])
{
    /*
    10. Write a program using nested loops that asks the user to enter a value for the
    number of rows to display.It should then display that many rows of asterisks,with
    one asterisk in the first row, two in the second row, and so on.For each row, the
    asterisks are preceded by the number of periods needed to make all the rows
    display a total number of characters equal to the number of rows.A sample run
    would look like this:
    Enter number of rows: 5
    ....*
    ...**
    ..***
    .****
    *****
    */
    int num = 0;
    cout << "Enter number of rows: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        // int space = num;
        // while (space > 0)
        // {
        //     if (space > i)
        //     {
        //         cout << ".";
        //     }
        //     else
        //     {
        //         cout << "*";
        //     }
        //     space--;
        // }
        int dot = num - i;
        int star = i;
        while (dot > 0)
        {
            cout << ".";
            dot--;
        }
        while (star > 0)
        {
            cout << "*";
            star--;
        }
        cout << endl;
    }
    return 0;
}
