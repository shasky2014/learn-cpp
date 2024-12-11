#include <base.h>
#include <string>
#include <cstring>
/***
4. The following is a program skeleton: (as this file is not a complete program)

Complete this skeleton by providing the described functions and prototypes. Note
that there should be two show() functions, each using default arguments. Use
const arguments when appropriate. Note that set() should use new to allocate
sufficient space to hold the designated string.The techniques used here are similar
to those used in designing and implementing classes. (You might have to alter the
header filenames and delete the using directive, depending on your compiler.)
*/
struct stringy
{
    char *str; // points to a string
    int ct;    // length of string (not counting ’\0’)
};
void set(stringy &beany, char *s)
{
    /*
    first argument is a reference,
    allocates space to hold copy of testing,
    sets str member of beany to point to the
    new block, copies testing to new block,
    and sets ct member of beany
    */
    char *p = new char[strlen(s) + 1];
    p = strcpy(p, s);
    beany.str = p;
    beany.ct = strlen(s);
};
void show(stringy &a, int t = 1)
{
    for (int i = 0; i < t; i++)
    {
        cout << a.str << ", " << a.ct << endl;
    }
};
void show(const char *a, int t = 1)
{
    for (int i = 0; i < t; i++)
    {
        cout << a << endl;
    }
};
int main()
{
    char cs[] = "a";
    cout << strlen(cs) << endl;

    stringy beany;
    char testing[] = "Reality is'nt what it used to be.";
    cout << strlen(testing) << endl;
    set(beany, testing);
    cout << strlen(beany.str) << endl;
    cout << beany.ct << endl;

    show(beany);    // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);    // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    return 0;
}