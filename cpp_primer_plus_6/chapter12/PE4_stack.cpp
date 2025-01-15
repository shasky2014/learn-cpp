#include <iostream>
#include "PE4_stack.h"
using std::cout;
using std::endl;

Stack::Stack(int n) : size(n)
{
    pitems = new Item[n];
    top = 0;
}

Stack::Stack(const Stack &st)
{
    pitems = new Item[st.size];
    for (int i = 0; i < st.top; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
}

Stack &Stack::operator=(const Stack &st)
{
    if (this == &st)
        return *this;
    delete[] pitems;
    pitems = new Item[st.size];
    for (int i = 0; i < st.top; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
    return *this;
}
Stack::~Stack()
{
    delete[] pitems;
    cout << "Stack[" << this << "] is deleted." << endl;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item &item)
{
    if (top < size)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item &item)
{
    if (top == 0)
        return false;
    else
    {
        --top;
        item = pitems[top];
        return true;
    }
}

std::ostream &operator<<(std::ostream &os, const Stack &st)
{
    os << "Stack[" << &st << "]:{size=" << st.size << ",top=" << st.top << ",pitems=[";
    for (int i = 0; i < st.top; i++)
    {
        os << st.pitems[i] << ",";
    }
    os << "]}";

    return os;
}
