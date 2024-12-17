#include <iostream>
#include "PE9_6_4.h"
namespace SALES
{
    using std::cin;
    using std::cout;
    using std::endl;
    void casSales(Sales &s, int n)
    {
        double max = 0;
        double min = 0;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                max = min = sum = s.sales[i];
            }
            else
            {
                sum = sum + s.sales[i];

                if (s.sales[i] > max)
                    max = s.sales[i];
                else if (s.sales[i] < min)
                    min = s.sales[i];
            }
        }
        s.average = sum / n;
        s.max = max;
        s.min = min;
    }
    void setSales(Sales &s)
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Enter the " << i + 1 << " quarter sales: ";
            cin >> s.sales[i];
        }
        casSales(s, QUARTERS);
    }
    void setSales(Sales &s, const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
        }
        casSales(s, n);
    }
    void showSales(const Sales &s, int n)
    {
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ": " << s.sales[i] << " ";
        }
        cout << "]" << endl
             << "The avg is: " << s.average << endl;
        cout << "The max is: " << s.max << endl;
        cout << "The min is: " << s.min << endl;
    }
}