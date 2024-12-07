#include <base.h>
#include <string>
// #include <cstring>
int main()
{
    /*
    4. Write a program that asks the user to enter his or her first name and then last
    name,and that then constructs, stores, and displays a third string consisting of the
    user’s last name followed by a comma, a space, and first name. Use string objects
    and methods from the string header file.A sample run could look like this:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here’s the information in a single string: Fleming, Flip
    */
    // const int ArrSize = 40;
    string *first_name = new string;
    string *last_name = new string;
    cout << "Enter your first name: ";
    getline(cin, *first_name);
    cout << "Enter your last name: ";
    getline(cin, *last_name);

    string *info = new string;
    *info = *last_name + ", " + *first_name;
    cout << "Here’s the information in a single string: " << *info << endl;

    delete info;
    delete last_name;
    delete first_name;

    return 0;
}
