#if !defined(PE1_COW)
#define PE1_COW
class cow
{
private:
    char name[20];
    char *hobby;
    double weight;

public:
    cow();
    cow(const char *nm, const char *ho, double wt);
    cow &operator=(const cow &c);
    cow(const cow &c);
    ~cow();
    void show() const;
};
#endif
