#include <iostream>
#include <cmath>
#include "L9_1_coordin.h"

void show_polar(polar pplace)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << pplace.distance
         << ", angle = " << pplace.angle * Rad_to_deg
         << " degrees" << endl;
}

polar rect_to_polar(rect rplace)
{
    polar answer;
    answer.distance = sqrt(rplace.x * rplace.x + rplace.y * rplace.y);
    answer.angle = atan2(rplace.y, rplace.x);
    return answer;
}