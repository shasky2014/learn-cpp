#ifndef TABLENN_H_
#define TABLENN_H_
#include <string>
using std::string;
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none",
                      bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) { hasTable = v; }
};

#endif