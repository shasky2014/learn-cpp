const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};
void setgolf(golf &g, const char *name, int lnc);
int setgolf(golf &g);

void handicap(golf &g, int lnc);
void showgolf(const golf &g);
