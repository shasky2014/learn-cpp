#include <base.h>
// #include <istream>

#include <string>
// #include <vector>
int main(int argc, char const *argv[])
{
    /*
1. Write a C++ program that requests and displays information as shown in the fol
lowing example of output:
 What is your first name? Betty Sue
 What is your last name? Yewe
 What letter grade do you deserve? B
 What is your age? 22
 Name: Yewe, Betty Sue
 Grade: C
 Age: 22
 Note that the program should be able to accept first names that comprise more
 than one word.Also note that the program adjusts the grade downward—that is, up
 one letter.Assume that the user requests an A, a B, or a C so that you don’t have to
 worry about the gap between a D and an F.
     */
    string first_name, last_name;
    cout << "What is your first name? ";
    getline(cin, first_name);
    cout << "What is your last name? ";
    getline(cin, last_name);

    char grade;
    int age;
    cout << "What letter grade do you deserve from A,B,C? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}
