#include <base.h>
unsigned int c_in_str(const char *str, char c);
char *buildstr(char c, int num);
int main()
{
    char str[] = "minimimmm";
    char c = 'm';
    unsigned int num = c_in_str(str, c);
    cout << num << endl;

    char *pt = buildstr('c', 5);
    cout << pt << endl
         << "汉字测试" << endl;
    return 0;
}

unsigned int c_in_str(const char *str, char c)
{
    int num = 0;
    while (*str)
    {
        if (*str == c)
        {
            num++;
        }
        str++;
    }
    return num;
}

char *buildstr(char c, int num)
{
    char *pt = new char[num + 1];
    // cout << "char *buildstr::num: " << num << endl;
    pt[num] = '\0';
    while (num-- > 0)
    {
        pt[num] = c;
        // cout << "char *buildstr::while:num=" << num << ",pt[num]=" << pt[num] << endl;
    }
    // cout << "char *buildstr:: pt= " << pt << endl;
    // cout << "char *buildstr:: *pt= " << *pt << endl;
    return pt;
}
// 99 '<error reading variable: Converting character sets: Invalid argument.>