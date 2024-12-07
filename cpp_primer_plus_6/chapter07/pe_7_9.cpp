#include <base.h>
/*
9.
This exercise provides practice in writing functions dealing with arrays and structures.
The following is a program skeleton. Complete it by providing the described functions:
*/
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);
int main()
{
    cout << "Enter class size : ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done" << endl;
    return 0;
}
int getinfo(student pa[], int n)
{
    // getinfo() has two arguments: a pointer to the first element of
    // an array of student structures and an int representing the
    // number of elements of the array. The function solicits and
    // stores data about students. It terminates input upon filling
    // the array or upon encountering a blank line for the student
    // name. The function returns the actual number of array elements
    // filled.
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Student #" << i + 1 << endl;
        cout << "Name: ";
        cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == '\0')
            break;
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "OOP Level: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}
void display1(student st)
{
    // display1() takes a student structure as an argument
    // and displays its contents
    cout << "----------------display1()----------------" << endl;
    cout << "Name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOP Level: " << st.ooplevel << endl;
}

void display2(const student *ps)
{
    // display2() takes the address of student structure as an
    // argument and displays the structure’s contents
    cout << "----------------display2()----------------" << endl;
    cout << "Name: " << (*ps).fullname << endl;
    cout << "Hobby: " << (*ps).hobby << endl;
    cout << "OOP Level: " << (*ps).ooplevel << endl;
}
void display3(const student pa[], int n)
{
    // display3() takes the address of the first element of an array
    // of student structures and the number of array elements as
    // arguments and displays the contents of the structures
    cout << "----------------Display3()----------------" << endl;
    for (int i = 0; i < n; i++)
    {
        display2(pa + i);
    }
}
