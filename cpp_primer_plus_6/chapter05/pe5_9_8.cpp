#include <base.h>
#include <cstring>
#include <array>

int main(int argc, char const *argv[])
{
    /*
    8. Write a program that uses an array of char and a loop to read one word at a time
    until the word done is entered.The program should then report the number of
    words entered (not counting done).A sample run could look like this:
    Enter words (to stop, type the word done):
    anteater birthday category dumpster
    envy finagle geometry done for sure
    You entered a total of 7 words.
    You should include the cstring header file and use the strcmp() function to
    make the comparison test.
    dumpsterdumpsteranteater
    */
    char *cars[10];
    array<string, 50> words;
    int num = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> *cars;
    while (strcmp(*cars, "done") != 0)
    {
        words[num] = *cars;
        num = num + 1;
        cin >> *cars;
    }
    cout << "You entered a total of " << num << " words as below: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << words[i] << endl;
    }
    return 0;
}
