#include <base.h>
#include <string>
// #include <cstring>

struct CandyBar
{
    string brand;
    float weight;
    int calories;
};
void showCandyBar(CandyBar &snack)
{
    cout << "CandyBar brand is " << snack.brand << endl;
    cout << "CandyBar weight is " << snack.weight << endl;
    cout << "CandyBar calories is " << snack.calories << endl;
};

int main()
{
    /*
    5. The CandyBar structure contains three members.The first member holds the brand
    name of a candy bar.The second member holds the weight (which may have a frac
    tional part) of the candy bar, and the third member holds the number of calories
    (an integer value) in the candy bar.Write a program that declares such a structure
    and creates a CandyBar variable called snack, initializing its members to "Mocha
    Munch",2.3,and 350,respectively.The initialization should be part of the declara
    tion for snack. Finally, the program should display the contents of the snack vari
    able.
    6. The CandyBar structure contains three members, as described in Programming
    Exercise 5.Write a program that creates an array of three CandyBar structures,
    initializes them to values of your choice, and then displays the contents of each structure.
    9. Do Programming Exercise 6,but instead of declaring an array of three CandyBar
    structures, use new to allocate the array dynamically.
    */
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "show snack info in Exercise 5" << endl;
    showCandyBar(snack);

    CandyBar snacks[3] = {
        {"Mocha Munch01", 1.0, 110},
        {"Mocha Munch02", 2.3, 350},
        {"Mocha Munch03", 4.3, 750}};

    cout << "show snacks info in Exercise 6" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "snacks[" << i << "]:" << endl;
        showCandyBar(snacks[i]);
    }
    // delete info;
    // delete last_name;
    // delete first_name;
    cout << "show snacks info in Exercise 9" << endl;
    CandyBar *snacks3 = new CandyBar[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "snacks3[" << i << "]:" << endl;
        snacks3[i] = snacks[i];
        showCandyBar(snacks3[i]);
    }
    delete[] snacks3;
    cout << "check snacks after delete snacks3 -----" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "snacks[" << i << "]:" << endl;
        showCandyBar(snacks[i]);
    }

    return 0;
}
