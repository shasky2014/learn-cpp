#ifndef PE4_STACK_H_
#define PE4_STACK_H_
#include <iostream>

typedef unsigned long Item;

class Stack
{
private:
    enum
    {
        MAX = 10
    };
    Item *pitems;
    int size;
    int top;

public:
    Stack(int n = MAX);
    Stack(const Stack &st);
    Stack &operator=(const Stack &st);
    ~Stack();

    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
    friend std::ostream &operator<<(std::ostream &os, const Stack &st);
};

#endif