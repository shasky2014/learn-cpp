#include <base.h>
#include <string>
int main()
{
    /*
    2. Rewrite Listing 4.4, using the C++ string class instead of char arrays.
    */

    string name;
    string dessert;
    cout << "Enter your name:\n";
    getline(cin, name); // reads through newline
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
