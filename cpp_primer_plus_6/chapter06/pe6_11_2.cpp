#include <base.h>
#include <cctype>

int main(int argc, char const *argv[])
{
    /*
    2. Write a program that reads up to 10 donation values into an array of double. (Or, if
    you prefer, use an array template object.) The program should terminate input on
    non-numeric input. It should report the average of the numbers and also report
    how many numbers in the array are larger than the average.
    */
    double a[10];
    double sum = 0;
    double avg = 0;
    double num;
    const int max_size = 0;
    int size = 0;
    while (size < 10 && cin >> num)
    {
        a[size] = num;
        sum = sum + num;
        size = size + 1;
    }
    avg = sum / size;
    cout << "The get " << size << " double nums." << endl;
    cout << "The sum is " << sum << endl;
    cout << "The average is " << avg << endl;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << i << " " << a[i] << endl;
        if (a[i] > avg)
        {
            count = count + 1;
        }
    }
    cout << "Got " << count << " nums big then average." << endl;

    return 0;
}
