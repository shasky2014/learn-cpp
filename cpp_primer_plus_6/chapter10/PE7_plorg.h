#ifndef STACK_H_
#define STACK_H_

class Plorg
{
private:
    static const int Len = 19;
    char name_[Len];
    int CI_;

public:
    Plorg();
    ~Plorg();
    Plorg(const char *name, int ci = 50);
    void update(int ci);
    void show() const;
    void rename(char *name);
};
#endif