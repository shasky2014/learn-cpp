#include <base.h>
#include <string>
/***
2. The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional part)
 of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that uses a function that takes
as arguments a reference to CandyBar, a pointer-to-char, a  double, and an int and
uses the last three values to set the corresponding members of the structure.The last
three arguments should have default values of “Millennium Munch,” 2.85, and 350.
Also the program should use a function that takes a reference to a CandyBar as an
argument and displays the contents of the structure. Use const where appropriate.*/
struct CandyBar
{
    string brand_name;
    double weight;
    int calories;
};
CandyBar &set(CandyBar &a, string name = "Millennium Munch", double weight = 2.85, int calories = 350)
{
    a.brand_name = name;
    a.weight = weight;
    a.calories = calories;
    return a;
}

void show(const CandyBar &a)
{
    cout << "Brand name: " << a.brand_name
         << ",\tWeight: " << a.weight
         << ",\tCalories: " << a.calories << endl;
    return;
}

int main(int argc, char const *argv[])
{
    CandyBar a;
    set(a);
    show(a);
    set(a, "TT", 2.6, 300);
    show(a);
    CandyBar b;
    set(b, "TTsss", 2.7, 200);
    show(b);

    return 0;
}
