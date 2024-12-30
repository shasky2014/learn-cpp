#include <iostream>
#include <print>
#include "PE5_stack.h"

Stack::Stack()
{
    std::cout << "create a empty Stack.\n";
    top = 0;
}
// Stack::~Stack()
// {
//     std::cout << "Bye, " << top << "!\n";
// }

bool Stack::isempty() const
{
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::isfull() const
{
    if (top == MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::push(const Item &item)
{
    if (top < MAX && top >= 0)
    {
        items[top] = item;
        top++;
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        top--;
        item = items[top];
        return true;
    }
    else
    {
        return false;
    }
}
int Stack::Ontop() const
{
    return top;
}
void Stack::show() const
{
    std::cout << "Stack[" << top << " ]:\n[";

    for (int i = 0; i < top; i++)
    {
        std::cout << i << ": {" << items[i].fullname << ": " << items[i].payment << "}";
        if (i == top - 1)
        {
            std::cout << "]\n";
        }
        else
            std::cout << ", ";
    }
}