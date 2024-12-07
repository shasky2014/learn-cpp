#include <base.h>
#include <cstring>
int main()
{
    /*
    3. Write a program that asks the user to enter his or her first name and then last
    name,and that then constructs, stores, and displays a third string, consisting of the
    user’s last name followed by a comma, a space, and first name. Use char arrays and
    functions from the cstring header file.A sample run could look like this:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here’s the information in a single string: Fleming, Flip
    */
    const int ArrSize = 40;
    char *first_name = new char[ArrSize];
    char *last_name = new char[ArrSize];
    cout << "Enter your first name: ";
    cin.get(first_name, ArrSize).get();
    cout << "Enter your last name: ";
    cin.get(last_name, ArrSize).get();

    char *info = new char[ArrSize * 2 + 2];
    info = strcpy(info, last_name);
    info = strcat(info, ", ");
    info = strcat(info, first_name);
    cout << "Here’s the information in a single string: " << info << endl;

    delete[] info;
    delete[] last_name;
    delete[] first_name;

    return 0;
}
