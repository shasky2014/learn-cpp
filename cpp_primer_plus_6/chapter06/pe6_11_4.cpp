#include <base.h>
#include <cctype>
#define strsize 30

struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main(int argc, char const *argv[])
{
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name     b. display by title" << endl;
    cout << "c. display by bopname  d. display by preference " << endl;
    cout << "q. quit " << endl;
    bop bop_set[] = {
        {"Bill Gates", "CEO", "Recharge", 0},
        {"Jack Ma", "Laoban", "FengQingyang", 1},
        {"TimCook", "CEO", "Cooker", 2},
        {"Trump Donade", "ChairMan", "ChuanJianguo", 1}};
    char a;
    while (cin >> a && a != 'q')
    {
        switch (a)
        {
        case 'a':
            for (bop man : bop_set)
            {
                cout << man.fullname << endl;
            };
            break;
        case 'b':
            for (bop man : bop_set)
            {
                cout << man.title << endl;
            };
            break;
        case 'c':
            for (bop man : bop_set)
            {
                cout << man.bopname << endl;
            };
            break;
        case 'd':
            for (bop man : bop_set)
            {
                if (man.preference == 0)
                {
                    cout << man.fullname << endl;
                }
                else if (man.preference == 1)
                {
                    cout << man.title << endl;
                }
                else if (man.preference == 2)
                {
                    cout << man.bopname << endl;
                }
                else
                {
                    cout << man.fullname << "'s man.preference error as:" << man.preference << endl;
                }
            };
            break;
        default:
            cout << "Please enter a b, c, d, or q:" << endl;
            break;
        }
    }
    return 0;
}
