#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "PE1.h"
using namespace vector;
using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::to_string;
int main(int argc, char const *argv[])
{
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0, 0);

    double target;
    double dstep;
    int loop_times = 0;

    // Vector v1 = Vector(7, 11, Vector::RECT);
    cout << "Enter target distance (q to quit):";
    while (cin >> target)
    {
        int steps_count, n, max_step, min_step, sum_step;
        loop_times += 1;
        ofstream fout("PE1_out" + to_string(loop_times) + ".txt");
        cout << "Enter step length:";
        if (!(cin >> dstep))
            break;

        cout << "Enter loop times:";
        if (!(cin >> n))
            break;
        fout << "Target distance: " << target << " step size:" << dstep << endl;
        max_step = min_step = sum_step = 0;
        for (int i = 0; i < n; i++)
        {
            steps_count = 0;
            while (result.d() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                step.RECT_mode();
                result = result + step;
                fout << "loop " << i << " ,step " << steps_count << " :walk " << step << " to " << result << endl;
                steps_count += 1;
            }
            max_step = (steps_count < max_step) ? max_step : steps_count;
            min_step = (steps_count > min_step) ? min_step : steps_count;
            sum_step += steps_count;

            cout << steps_count << " steps to the target" << endl;
            cout << result << endl;
            cout << "Average outward distance per step is " << result.d() / steps_count << endl;

            fout << "cost " << steps_count << " steps to the target" << endl
                 << result;
            result.POL_mode();
            fout << " or " << result << endl
                 << "Average outward distance per step is " << result.d() / steps_count << endl;
            result.reset();
            step = 0;
        }
        cout << "max_step= " << max_step << " min_step= " << min_step << " avg_step= " << sum_step / n << endl;
        fout << "After " << n << " loops, max_step= " << max_step << " min_step= " << min_step << " avg_step= " << sum_step / n << endl;
        fout.close();
        cout << "Enter target distance (q to quit):";
    }
    cout << "Bye!" << endl;
    cin.clear();

    return 0;
}
