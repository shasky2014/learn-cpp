#include <iostream>
#include <cstring>
#include "PE4_sales.h"
namespace SALES
{
    using namespace std;
    void Sales::cas()
    {
        double max = 0;
        double min = 0;
        double sum = 0;
        for (int i = 1; i < q_; i++)
        {
            if (i == 0)
            {
                max = min = sum = sales_[i];
            }
            else
            {
                sum = sum + sales_[i];

                if (sales_[i] > max)
                    max = sales_[i];
                else if (sales_[i] < min)
                    min = sales_[i];
            }
        }
        average_ = sum / q_;
        max_ = max;
        min_ = min;
    }
    Sales::Sales()
    {
        q_ = 0;
        average_ = max_ = min_ = 0;
    }
    Sales::~Sales()
    {
        cout << "Sales[" << this << "] is destructed.\n";
    }
    Sales::Sales(const double ar[], int n)
    {
        if (n > QUARTERS)
            q_ = QUARTERS;
        else
            q_ = n;

        for (int i = 0; i < q_; i++)
        {
            sales_[i] = ar[i];
        }
        cas();
    }
    void Sales::set()
    {
        q_ = QUARTERS;
        for (int i = 0; i < q_; i++)
        {
            cout << "Enter the " << i + 1 << " quarter sales: ";
            cin >> sales_[i];
        }
        cas();
    }
    void Sales::show() const
    {
        cout << "Sales[" << this << "]{sales:[";
        if (q_ == 0)
            cout << "]";
        for (int i = 0; i < q_; i++)
        {
            cout << i + 1 << ": " << sales_[i];
            if (i == (q_ - 1))
                cout << "]";
            else
                cout << ", ";
        }
        cout << ", avg: " << average_
             << ", max: " << max_
             << ", min: " << min_ << "}\n";
    }
}