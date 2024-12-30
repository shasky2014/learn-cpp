#ifndef GOLF_H_
#define GOLF_H_
class Golf
{
private:
    static const int Len = 40;
    char fullname_[Len];
    int handicap_;

public:
    Golf();
    Golf(const char *name, int lnc = 0);
    Golf setgolf();
    void handicap(int lnc);
    void show() const;
};
#endif