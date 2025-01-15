#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PE6_bank.h"
using std::cin;
using std::cout;
using std::endl;
using std::rand;
using std::srand;
using std::time;
using namespace bank;
const int MIN_PER_HOUR = 60;
bool newcustomer(double x)
{
    // x是预计每个人需要的时间，根据x生成随机数判断是否有新客户进来
    // 目的每小时随机生成 x 个 newcustomer
    return (x * rand() / RAND_MAX < 1);
}

Queue &shortQueue(Queue &q1, Queue &q2)
{
    if (q1.count() < q2.count())
        return q1;
    else
        return q2;
}

int main(int argc, char const *argv[])
{

    srand(time(0));
    Item temp;
    int qs = 10;
    Queue line1(qs);
    Queue line2(qs);
    Queue *tmp;
    int hours = 350;
    long cyclelimit = MIN_PER_HOUR * hours;

    for (int i = 40; i <= 60; i++)
    {
        line1.clean();
        line2.clean();
        double perhour = i;
        double min_per_cust = MIN_PER_HOUR / perhour;

        long turnaways = 0;
        long customers = 0;
        long served = 0;
        double sum_line = 0;
        int wait_time1 = 0;
        int wait_time2 = 0;
        double line_wait = 0;

        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            // cout << cycle << ":line size " << line.count() << "\t\t";
            if (newcustomer(min_per_cust))
            {
                if (line1.isfull() && line2.isfull())
                {
                    turnaways++;
                    // cout << "turnaway a customer on " << cycle << "\t\t";
                }
                else
                {
                    customers++;
                    temp.set(cycle);
                    shortQueue(line1, line2).add(temp);
                    // cout << "add a customer: " << temp.ptime() << ", on " << temp.when() << "\t\t";
                }
            }
            if (wait_time1 <= 0 && !line1.isempty())
            {
                line1.drop(temp);
                wait_time1 = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
                // cout << "go a customer: " << temp.ptime() << ", on " << temp.when() << "\t\t";
            }
            if (wait_time2 <= 0 && !line2.isempty())
            {
                line2.drop(temp);
                wait_time2 = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
                // cout << "go a customer: " << temp.ptime() << ", on " << temp.when() << "\t\t";
            }
            if (wait_time1 > 0)
                wait_time1--;
            if (wait_time2 > 0)
                wait_time2--;
            sum_line += line1.count() + line2.count();

            // cout << endl;
        }

        if (customers > 0)
        {
            cout << line1 << "," << line2 << ",perhour:" << perhour << endl;
            cout << "customers accepted: " << customers << endl;
            cout << "customers served: " << served << endl;
            cout << "turnaways: " << turnaways << endl;

            cout.precision(2);
            cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
            cout << "average queue size: " << (double)sum_line / cyclelimit << endl;
            cout << "average wait time: " << line_wait / served << " minutes per customer" << endl;
        }
        else
            cout << "No customers!\n";

        if (line_wait / served > 1)
            break;
    }
    cout << "Done!\n";
    return 0;
}
