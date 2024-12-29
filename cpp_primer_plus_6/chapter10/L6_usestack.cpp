#include <iostream>
#include <cctype>
#include "L6_stack.h"
int main(int argc, char const *argv[])
{
    using namespace std;
    Stack st;
    char ch;
    Item po;
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
            if (st.isfull())
            {
                cout << "stack already full\n";
            }
            else
            {
                cout << "Enter a SKU number to add: ";
                cin >> po;
                st.push(po);
            }
            st.show();
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty\n";
            else
            {
                st.pop(po);
                cout << "SKU[" << st.Ontop() << "] #" << po << " popped\n";
            }
            st.show();
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    st.show();
    cout << "Bye\n";
    return 0;
}
