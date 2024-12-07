#include <base.h>
#include <string>
#include <array>
int main(int argc, char const *argv[])
{
    /*
    6. Do Programming Exercise 5 but use a two-dimensional array to store input for 3
    years of monthly sales. Report the total sales for each individual year and for the
    combined years.
    */
    int sales[3][12];
    array<string, 12> month_strings = {
        "January", "February", "March"
        // , "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };

    int year = 1;
    int all_year_sum = 0;
    while (year <= 3)
    {
        cout << "in the year:" << year << endl;
        int month = 1;
        int year_sum = 0;
        while (month <= 3)
        {
            cout << "Enter the number of books sold in " << month_strings[month - 1] << ": ";
            int books_sold;
            cin >> books_sold;
            sales[year - 1][month - 1] = books_sold;
            year_sum += books_sold;
            cout << "Total sales for " << month_strings[month - 1] << ": " << sales[year - 1][month - 1] << endl;
            ++month;
        }
        cout << "Total sales for the " << year << " year: " << year_sum << endl;
        year = year + 1;
        all_year_sum = year_sum + all_year_sum;
    }
    cout << "Total sales for all this 3 years: " << all_year_sum << endl;

    return 0;
}
