#include <base.h>
#include <string>
#include <array>

int main(int argc, char const *argv[])
{
    /*
    9. Write a program that matches the description of the program in Programming
    Exercise 8, but use a string class object instead of an array. Include the string
    header file and use a relational operator to make the comparison test.
    */
    string a;
    array<string, 50> words;
    int num = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> a;
    while (a != "done")
    {
        words[num] = a;
        num = num + 1;
        cin >> a;
    }
    cout << "You entered a total of " << num << " words as below: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << words[i] << endl;
    }
    return 0;
}
