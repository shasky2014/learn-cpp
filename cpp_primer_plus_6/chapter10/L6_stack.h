#ifndef STACK_H_
#define STACK_H_

#include <string>
typedef unsigned long Item;

class Stack
{
private:
    enum
    {
        MAX = 10
    };
    Item items[MAX];
    int top;

public:
    // 构造函数
    Stack();
    // 析构函数，负责对象删除时的清理或者逻辑
    // ~Stack();

    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
    int Ontop() const;
    void show() const;
};

#endif