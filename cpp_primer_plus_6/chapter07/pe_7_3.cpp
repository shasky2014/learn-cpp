#include <base.h>
/*
    3. Here is a structure declaration:
    struct box
    {
        char maker[40];
        float height;
        float width;
        float length;
        float volume;
    };
    a. Write a function that passes a box structure by value and that displays the
    value of each member.
    b. Write a function that passes the address of a box structure and that sets the
    volume member to the product of the other three dimensions.
    c. Write a simple program that uses these two functions.
*/
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(const box *x);
void set_volume(box *x);

int main()
{
    box x = {"box maker",
             10,
             20,
             30,
             0};

    display(&x);
    set_volume(&x);
    display(&x);
    return 0;
}

void display(const box *x)
{
    cout << "maker:\t" << (*x).maker << endl;
    cout << "height*width*length:\t" << (*x).height << "*" << (*x).width << "*" << (*x).length << endl;
    cout << "volume:\t" << (*x).volume << endl;
}

void set_volume(box *x)
{
    x->volume = x->height * x->width * x->length;
}
