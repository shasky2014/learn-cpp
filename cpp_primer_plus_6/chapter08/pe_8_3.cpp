#include <base.h>
#include <string>
/***
3. Write a function that takes a reference to a string object as its parameter and that
converts the contents of the string to uppercase. Use the toupper() function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input. A sample run might look like this:
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.*/
string &set_upper(string &a)
{
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        a[i] = toupper(a[i]);
    }
    return a;
}
int main(int argc, char const *argv[])
{
    string a;
    cout << "Enter a string (q to quit): ";
    getline(cin, a);
    while (a != "q")
    {
        cout << set_upper(a) << endl;
        cout << "Next string (q to quit): ";
        getline(cin, a);
    }
    cout << "Bye." << endl;

    return 0;
}
