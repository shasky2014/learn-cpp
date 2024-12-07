#include <base.h>
#include <cctype>
#include <string>

struct Contributor
{
    string name;
    double contribution;
};

int main()
{
    /*
    6. Put together a program that keeps track of monetary contributions to the Society
    for the Preservation of Rightful Influence. It should ask the user to enter the num-
    ber of contributors and then solicit the user to enter the name and contribution of
    each contributor.The information should be stored in a dynamically allocated array
    of structures. Each structure should have two members: a character array (or else a
    string object) to store the name and a double member to hold the amount of the
    contribution. After reading all the data, the program should display the names and
    amounts donated for all donors who contributed $10,000 or more.This list should
    be headed by the label Grand Patrons. After that, the program should list the
    remaining donors.That list should be headed Patrons. If there are no donors in one
    of the categories, the program should print the word “none.” Aside from displaying
    two categories, the program need do no sorting.
    */
    int number;
    cout << "Enter the number of contributors: " << endl;
    cin >> number;
    Contributor *contributors = new Contributor[number];
    cout << "Get number: " << number << endl;
    cout << "Enter the name and contribution of each contributor : " << endl;

    for (int i = 0; i < number; i++)
    {
        cout << i + 1 << " Name" << ": ";
        cin.get();
        getline(cin, contributors[i].name); // 使用getline支持名字中有空格
        cout << i + 1 << " Contribution: " << ": ";
        cin >> contributors[i].contribution;
    }

    cout << "Show all datas : " << endl;

    for (int i = 0; i < number; i++)
    {
        cout << contributors[i].name << endl
             << contributors[i].contribution << endl;
    }

    return 0;
}
