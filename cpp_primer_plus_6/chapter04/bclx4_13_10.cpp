#include <base.h>
#include <array>
// #include <cstring>
int main()
{
    /*
    10. Write a program that requests the user to enter three times for the 40-yd dash (or
    40-meter, if you prefer) and then displays the times and the average. Use an array
    object to hold the data. (Use a built-in array if array is not available.)
    */
    array<float, 3> dashs;
    float sum = 0;
    cout << "Enter three times for the 40-meter dash by second: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cin >> dashs[i];
        sum = sum + dashs[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << dashs[i] << " ";
        // sum = sum + dashs[i];
    }
    cout << endl
         << "so the average times is: "
         << sum / 3 << " s" << endl;

    return 0;
}
