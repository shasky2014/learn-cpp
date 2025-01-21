#ifndef PE1_CD_H_
#define PE1_CD_H_

class CD
{
private:
    char performer_[50];
    char label_[20];
    int selections_;
    double playtime_;

public:
    CD(const char *, const char *, int, double);
    CD(const CD &);
    CD();
    ~CD() {}
    virtual void Report() const;
    virtual CD &operator=(const CD &);
};

class ClassicCD : public CD
{
private:
    char content_[500];

public:
    ClassicCD(const char *content, const char *performer, const char *label, int selections, double playtime);
    ClassicCD(const char *content, const CD &);
    ClassicCD(const ClassicCD &);
    ClassicCD();
    ~ClassicCD() {}
    virtual void Report() const;
    ClassicCD &operator=(const ClassicCD &);
};

#endif