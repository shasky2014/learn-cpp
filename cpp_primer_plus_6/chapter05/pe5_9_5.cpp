#include <base.h>
#include <string>
#include <array>
int main(int argc, char const *argv[])
{
    /*
    5. You sell the book C++ for Fools.Write a program that has you enter a year’s worth
    of monthly sales (in terms of number of books, not of money).
    The program should use a loop to prompt you by month,
    using an array of char * (or an array of string objects, if you prefer) initialized to the month strings
    and storing the input data in an array of int.
    Then,the program should find the sum of the array contents and report the total sales for the year.
    */
    array<int, 12> sales;
    array<string, 12> month_strings = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int month = 1;
    int sum = 0;
    while (month <= 12)
    {
        cout << "Enter the number of books sold in " << month_strings[month - 1] << ": ";
        int books_sold;
        cin >> books_sold;
        sales[month - 1] = books_sold;
        sum += books_sold;
        cout << "Total sales for " << month_strings[month - 1] << ": " << sales[month - 1] << endl;
        ++month;
    }

    cout << "Total sales for the year: " << sum << endl;

    return 0;
}
