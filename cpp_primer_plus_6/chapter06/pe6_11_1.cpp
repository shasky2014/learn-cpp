#include <base.h>
#include <cctype>

int main(int argc, char const *argv[])
{
    /*
    1. Write a program that reads keyboard input to the @ symbol and that echoes the
    input except for digits, converting each uppercase character to lowercase, and vice
    versa. (Don’t forget the cctype family.)
    */
    char a;

    cin >> a;

    while (a != '@')
    {
        if (isupper(a)) // >= 'A' && a <= 'Z'
        {
            a = tolower(a); // a += 32;
            cout << a;
        }
        else if (islower(a)) // a >= 'a' && a <= 'z'
        {
            a = toupper(a);
            cout << a;
        }
        else if (isdigit(a)) // a >= '0' && a <= '9')
        {
            cout << " ";
            cin >> a;
            continue;
        }
        else
        {
            cout << a;
        }

        cin >> a;
    }

    return 0;
}
