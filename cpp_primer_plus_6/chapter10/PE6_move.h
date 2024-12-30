#ifndef STACK_H_
#define STACK_H_

#include <string>

class Move
{
private:
    double x;
    double y;

public:
    Move()
    {
        x = 0;
        y = 0;
    }
    Move(double a, double b);
    // ~Move();
    void show() const;
    Move add(const Move &m);
    void reset(double a = 0, double b = 0);
};

#endif