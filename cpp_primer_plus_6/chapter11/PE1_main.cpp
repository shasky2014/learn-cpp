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
        loop_times += 1;
        int steps_count = 0;
        ofstream fout("PE1_out" + to_string(loop_times) + ".txt");
        cout << "Enter step length:";
        if (!(cin >> dstep))
            break;
        fout << "Target distance: " << target << " step size:" << dstep << endl;
        while (result.d() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            fout << steps_count << ":walk " << step << " to " << result << endl;
            steps_count += 1;
        }
        cout << steps_count << " steps to the target" << endl;
        cout << result << endl;
        cout << "Average outward distance per step is " << result.d() / steps_count << endl;

        fout << "cost " << steps_count << " steps to the target" << endl
             << result << endl
             << "Average outward distance per step is " << result.d() / steps_count << endl;
        fout.close();

        step = 0;
        result.reset();
        cout << "Enter target distance (q to quit):";
    }
    cout << "Bye!" << endl;
    cin.clear();

    return 0;
}
