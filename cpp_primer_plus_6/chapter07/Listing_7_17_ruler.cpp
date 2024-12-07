#include <cmath>
#include <string>
#include <array>
#include <base.h>

const int Dives = 7;
const int Len = pow(2, Dives) + 2;

void fillspace(char ruler[], int begin, int end);
void subdivde(char ruler[], int low, int high, int level);
int main()
{
    char ruler[Len];
    fillspace(ruler, 1, Len - 2);
    ruler[Len - 1] = '\0';

    int min = 0;
    int max = Len - 2;
    ruler[min] = ruler[max] = '|';

    cout << ruler << endl;

    for (int i = 1; i < Dives; i++)
    {
        subdivde(ruler, min, max, i);
        cout << ruler << endl;
        fillspace(ruler, 1, Len - 2);
    }
    return 0;
}

void fillspace(char ruler[], int begin, int end)
{
    for (int j = begin; j < end; j++)
        ruler[j] = ' ';
}

void subdivde(char ruler[], int low, int high, int level)
{
    if (level == 0)
        return;
    int mid = (low + high) / 2;
    ruler[mid] = '|';
    subdivde(ruler, low, mid, level - 1);
    subdivde(ruler, mid, high, level - 1);
}
