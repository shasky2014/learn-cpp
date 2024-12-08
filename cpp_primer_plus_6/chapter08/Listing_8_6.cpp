#include <string>
#include <base.h>

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);
int main()
{
    free_throws one = {"One Throw", 13, 14};
    free_throws two = {"Two Throw", 10, 16};
    free_throws three = {"Three Throw", 7, 9};
    free_throws four = {"four Throw", 5, 9};
    free_throws five = {"five Throw", 6, 14};
    free_throws team = {"team Throw", 0, 0};
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    cout << "display team after accumulate(team, one)" << endl;
    display(team);
    cout << "display team after display(accumulate(team, two))" << endl;
    display(accumulate(team, two));

    accumulate(accumulate(team, three), four);
    cout << "display team after accumulate(team, four)" << endl;
    display(team);

    dup = accumulate(team, five);
    cout << "display team after accumulate(team, five)" << endl;
    display(team);
    cout << "display dup after dup=accumulate(team, five)" << endl;
    display(dup);

    set_pc(four);
    accumulate(dup, five) = four;
    display(dup);
    display(four);
    display(team);

    return 0;
}

void display(const free_throws &ft)
{
    cout << "Name: " << ft.name << " and &ft: " << &ft << endl;
    cout << "Made:\t" << ft.made
         << " Attempts:\t" << ft.attempts
         << " Percent:\t" << ft.percent << endl;
}

void set_pc(free_throws &ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws &accumulate(free_throws &target, const free_throws &source)
{
    target.made += source.made;
    target.attempts += source.attempts;
    set_pc(target);
    return target;
}
