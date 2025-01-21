#include <iostream>
#include <cstring>
#include "PE1_cd.h"
using std::cin;
using std::cout;
using std::endl;
using std::strcpy;
CD::CD(const char *performer, const char *label, int selections, double playtime)
{
    // performer_ = new char[strlen(performer) + 1];
    strcpy(performer_, performer);
    // label_ = new char[strlen(label) + 1];
    strcpy(label_, label);
    selections_ = selections;
    playtime_ = playtime;
}
CD::CD(const CD &cd)
{
    // performer_ = new char[strlen(cd.performer_) + 1];
    strcpy(performer_, cd.performer_);
    // label_ = new char[strlen(cd.label_) + 1];
    strcpy(label_, cd.label_);
    selections_ = cd.selections_;
    playtime_ = cd.playtime_;
}
CD::CD()
{
    strcpy(performer_, "default performer");
    // label_ = new char[strlen(label) + 1];
    strcpy(label_, "default label");
    selections_ = 0;
    playtime_ = 0;
}

void CD::Report() const
{
    cout << "performer: " << performer_ << ", \nlabel: " << label_ << ", \nselections: " << selections_ << ", \nplaytime: " << playtime_ << "\n";
}
CD &CD::operator=(const CD &cd)
{
    if (this == &cd)
        return *this;
    strcpy(performer_, cd.performer_);
    strcpy(label_, cd.label_);
    selections_ = cd.selections_;
    playtime_ = cd.playtime_;
    return *this;
}
ClassicCD::ClassicCD(const char *content, const char *performer, const char *label, int selections, double playtime)
    : CD(performer, label, selections, playtime)
{
    strcpy(content_, content);
}
ClassicCD::ClassicCD(const char *content, const CD &cd)
    : CD(cd)
{
    strcpy(content_, content);
}

ClassicCD::ClassicCD(const ClassicCD &ccd)
    : CD(ccd)
{
    strcpy(content_, ccd.content_);
}
ClassicCD::ClassicCD()
    : CD()
{
    strcpy(content_, "default content");
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
    strcpy(content_, ccd.content_);
    return *this;
}
