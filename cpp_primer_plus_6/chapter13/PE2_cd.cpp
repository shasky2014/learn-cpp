#include <iostream>
#include <cstring>
#include "PE2_cd.h"
using std::cin;
using std::cout;
using std::endl;
using std::strcpy;
CD::CD(const char *performer, const char *label, int selections, double playtime)
{
    performer_ = new char[strlen(performer) + 1];
    strcpy(performer_, performer);
    label_ = new char[strlen(label) + 1];
    strcpy(label_, label);
    selections_ = selections;
    playtime_ = playtime;
}
CD::CD(const CD &cd)
{
    performer_ = new char[strlen(cd.performer_) + 1];
    strcpy(performer_, cd.performer_);
    label_ = new char[strlen(cd.label_) + 1];
    strcpy(label_, cd.label_);
    selections_ = cd.selections_;
    playtime_ = cd.playtime_;
}
CD::CD()
{
    performer_ = new char[strlen("default performer") + 1];
    strcpy(performer_, "default performer");
    label_ = new char[strlen("default label") + 1];
    strcpy(label_, "default label");
    selections_ = 0;
    playtime_ = 0;
}
CD::~CD()
{
    cout << "CD[" << this << "] destructor called\n";
    delete[] performer_;
    delete[] label_;
}

void CD::Report() const
{
    cout << "performer: " << performer_ << ", \nlabel: " << label_ << ", \nselections: " << selections_ << ", \nplaytime: " << playtime_ << "\n";
}
CD &CD::operator=(const CD &cd)
{
    if (this == &cd)
        return *this;
    delete[] performer_;
    performer_ = new char[strlen(cd.performer_) + 1];
    strcpy(performer_, cd.performer_);

    delete[] label_;
    label_ = new char[strlen(cd.label_) + 1];
    strcpy(label_, cd.label_);

    selections_ = cd.selections_;
    playtime_ = cd.playtime_;
    return *this;
}
ClassicCD::ClassicCD(const char *content, const char *performer, const char *label, int selections, double playtime)
    : CD(performer, label, selections, playtime)
{
    content_ = new char[strlen(content) + 1];
    strcpy(content_, content);
}
ClassicCD::ClassicCD(const char *content, const CD &cd)
    : CD(cd)
{
    content_ = new char[strlen(content) + 1];
    strcpy(content_, content);
}

ClassicCD::ClassicCD(const ClassicCD &ccd)
    : CD(ccd)
{
    content_ = new char[strlen(ccd.content_) + 1];
    strcpy(content_, ccd.content_);
}
ClassicCD::ClassicCD()
    : CD()
{
    content_ = new char[strlen("default content") + 1];
    strcpy(content_, "default content");
}
ClassicCD::~ClassicCD()
{
    /*
     * 这里不需要再调用CD::~CD()，因为CD::~CD()会在当前方法执行完之后,默认被调用
     */
    cout << "ClassicCD[" << this << "] destructor called\n";
    delete[] content_;
}

void ClassicCD::Report() const
{
    CD::Report();
    cout << "content: " << content_ << "\n";
}
ClassicCD &ClassicCD::operator=(const ClassicCD &ccd)
{
    if (this == &ccd)
        return *this;
    CD::operator=(ccd);

    delete[] content_;
    content_ = new char[strlen(ccd.content_) + 1];
    strcpy(content_, ccd.content_);

    return *this;
}
