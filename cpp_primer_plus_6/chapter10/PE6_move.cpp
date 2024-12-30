#include <iostream>
#include <print>
#include "PE6_move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}
// Stack::~Stack()
// {
//     std::cout << "Bye, " << top << "!\n";
// }

void Move::show() const
{
    std::cout << "Stack[" << this << " ]:{" << "x: " << x << ", y: " << y << "}\n";
}

Move Move::add(const Move &m)
{
    return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
