#include <base.h>
int main(int argc, char const *argv[])
{
    char ch;
    int spaces = 0, enter = 0;
    while (cin.get(ch))
    {
        if (ch == ' ')
        {
            spaces++;
        }
        else if (ch == '\n')
        {
            enter++;
        }
    }
    cout << "There are " << spaces << " spaces and " << enter << " enter." << endl;
}
