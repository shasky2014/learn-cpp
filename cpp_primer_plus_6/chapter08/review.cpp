#include <string>
#include <array>
#include <cstring>
#include <base.h>
// 1. What kinds of functions are good candidates for inline status?
// 如果代码执行的时间很短，使用内联函数可以节省调用使用的大部分时间。
// 如果执行代码的时间比处理调用的时间长，则节省的时间只占一少部分。
// 需要考虑内存的占用和执行时间性能的平衡。
// 2. Suppose the song() function has this prototype:
//      void song(const char *name, int times);
// a. How would you modify the prototype so that the default value for times
// is 1?
//      A: void song(const char *name = "O. My Papa", int times = 1)
// b. What changes would you make in the function definition?
//      A: nothing
// c. Can you provide a default value of "O, My Papa" for name?
//      A: of course.
// 3. Write overloaded versions of iquote(), a function that displays its argument
// enclosed in double quotation marks.Write three versions: one for an int argument,
// one for a double argument, andand one for a string argument.
// 4. The following is a structure template:
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
// a.Write a function that has a reference to a box structure as its formal argument
//     and displays the value of each member.
// b.Write a function that has a reference to a box structure as its formal argument
//     and sets the volume member to the product of the other three dimensions.
/*
6. The following are some desired effects. Indicate whether each can be accom-
plished with default arguments, function overloading, both, or neither. Provide
appropriate prototypes.
a. mass(density, volume) returns the mass of an object having a density of
density and a volume of volume, whereas mass(density) returns the mass
having a density of density and a volume of 1.0 cubic meters. All quantities
are type double.
double mass(double density, double volume=1.0){
    return density * volume;
}

b. repeat(10, "I’m OK") displays the indicated string 10 times, and
repeat("But you’re kind of stupid") displays the indicated string 5
times.
c. average(3,6) returns the int average of two int arguments, and
average(3.0, 6.0) returns the double average of two double values.
d. mangle("I’m glad to meet you") returns the character I or a pointer to
the string "I’m mad to gleet you", depending on whether you assign the
return value to a char variable or to a char* variable.
*/

template <class T>
T bigger(T a, T b)
{
    return a > b ? a : b;
}

template <>
box bigger<box>(const box &a, const box &b)
{
    return a.volume > b.volume ? a : b;
}
char mangle(char c)
{
    return c;
};
char *mangle(char *c)
{
    return c;
};

template <typename T>
T average(T a, T b)
{
    return (a + b) / 2;
};
double mass(double density, double volume = 1.0)
{
    return density * volume;
}
void repeat(const char *a = "I’m OK", int n = 5)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << a << endl;
    }
}
void show_box(const box &b)
{
    cout << "maker: " << b.maker << "volume: " << b.volume << endl;
    cout << "h*w*l: " << b.height << "*" << b.width << "*" << b.length << endl;
}
void set_box(box &b)
{
    b.volume = b.height * b.width * b.length;
}

void song(const char *name = "O. My Papa", int times = 1)
{
    cout << "Playing [" << name << "] " << times << " times." << endl;
    for (int i = 0; i < times; i++)
    {
        cout << name << endl;
    }
};
template <typename T>
void iquote(const T &a)
{
    cout << "\"" << a << "\"" << endl;
};

// void iquote(int a)
// {
//     cout << "\"" << a << "\"" << endl;
// };
// void iquote(double a)
// {
//     cout << "\"" << a << "\"" << endl;
// };
// void iquote(char *a)
// {
//     cout << "\"" << a << "\"" << endl;
// };

int main(int argc, char const *argv[])
{
    song("Beat it");
    iquote(1);
    iquote(2.8);
    iquote("Beat it");
    // A: 4
    box b = {"tt", 3, 5, 7};
    box a = {"kk", 2, 5, 8};
    set_box(a);
    set_box(b);
    cout << "show the bigger one" << endl;
    show_box(bigger<box>(a, b));

    show_box(b);
    set_box(b);
    show_box(b);
    repeat(" I’m OK ", 10);
    repeat(" babalaka ");
    char c[] = "I’m glad to meet you";
    cout << mangle(c) << endl;
    cout << mangle(*c) << endl;
    cout << mangle('K') << endl;

    cout << bigger(4, 8) << endl;
    cout << bigger<float>(3.8, -8) << endl;
    cout << bigger<char>('k', '0') << endl;
    return 0;
}
