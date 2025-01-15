#include <iostream>
#include "PE4_stack.h"
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    Stack s(8);
    Item tmp;
    for (int i = 0; i < 3; i++)
    {
        tmp = i + 1;
        s.push(tmp);
    }
    cout << s << endl;
    s.pop(tmp);
    cout << tmp << endl;
    cout << s << endl;

    Stack s1(s);
    cout << s1 << endl;

    Stack s12;
    cout << s12 << endl;
    s12 = s1;
    cout << s12 << endl;

    return 0;
}
