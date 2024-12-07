#include <base.h>
#include <cctype>

int main(int argc, char const *argv[])
{
    /*
    3. Write a precursor to a menu-driven program.The program should display a menu
    offering four choices, each labeled with a letter. If the user responds with a letter
    other than one of the four valid choices, the program should prompt the user to
    enter a valid response until the user complies.Then the program should use a
    switch to select a simple action based on the user’s selection. A program run could
    look something like this:
    Please enter one of the following choices:
    c) carnivore           p) pianist
    t) tree                g) game
    f
    Please enter a c, p, t, or g: q
    Please enter a c, p, t, or g: t
    A maple is a tree.
    */
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore           p) pianist " << endl;
    cout << "t) tree                g) game " << endl;
    char a;

    while (cin >> a)
    {
        switch (a)
        {
        case 'c':
            cout << "A maple is a carnivore." << endl;
            break;
        case 'p':
            cout << "A maple is a pianist." << endl;
            break;
        case 't':
            cout << "A maple is a tree." << endl;
            break;
        case 'g':
            cout << "A maple is a game." << endl;
            break;
        default:
            cout << "Please enter a c, p, t, or g:" << endl;
            break;
        }
    }
    return 0;
}
