#include <base.h>
/*
    2. Write a program that asks the user to enter up to 10 golf scores, which are to be
    stored in an array.You should provide a means for the user to terminate input prior
    to entering 10 scores.The program should display all the scores on one line and
    report the average score. Handle input, display, and the average calculation with
    three separate array-processing functions.
*/
int input(double x[], int maxsize);
void display(const double x[], int maxsize);
double average(const double x[], int maxsize);
int main()
{
    const int maxsize = 10;
    double scores[maxsize];
    int size = input(scores, maxsize);
    display(scores, size);
    cout << "average: " << average(scores, size) << endl;
    return 0;
}

int input(double x[], int maxsize)
{
    cout << "enter golf scores(up to 10): " << endl;
    int i = 0;
    double n;
    while (i < maxsize && cin >> n)
    {
        x[i] = n;
        i++;
    }
    return i;
}

void display(const double x[], int maxsize)
{
    int i = 0;
    while (i < maxsize)
    {
        cout << i << ": " << x[i] << endl;
        i++;
    }
    return;
}

double average(const double x[], int maxsize)
{
    double sum = 0;
    if (maxsize == 0)
    {
        return 0;
    }
    for (int i = 0; i < maxsize; i++)
    {
        sum += x[i];
    }
    return sum / maxsize;
}
