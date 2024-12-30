#include <iostream>
#include <cstring>
#include "PE5_stack.h"

int main(int argc, char const *argv[])
{
    using namespace std;
    Stack s1;
    cout << "s1:" << endl;
    s1.show();
    Item c1;
    char ch;
    double summery = 0;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            if (s1.isfull())
            {
                cout << "stack already full\n";
            }
            else
            {
                cout << "Enter coustomer name: ";
                cin.getline(c1.fullname, 40);
                cout << "Enter coustomer payment:  ";
                cin >> c1.payment;
                cin.get();
                s1.push(c1);
            }
            s1.show();
            break;
        case 'P':
        case 'p':
            if (s1.isempty())
                cout << "stack already empty\n";
            else
            {
                s1.pop(c1);
                summery = summery + c1.payment;
                cout << "SKU[" << s1.Ontop() << "] #" << c1.fullname << " popped\n";
            }
            s1.show();
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "The total payment is: " << summery;
    return 0;
}
