#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 60;
int main(int argc, char const *argv[])
{
    char filename[50];
    double data[SIZE];
    double value;
    double sum;
    int count;
    // 输入数据
    cout << "Enter the filename: ";
    cin.getline(filename, 50);

    // 读取文件内数据
    ifstream inFile;
    inFile.open(filename);
    inFile >> value;
    while (inFile.good())
    {
        data[count] = value;
        count++;
        sum = sum + value;
        inFile >> value;
    }

    if (inFile.eof())
    {
        cout << "End of file reached" << endl;
    }
    else if (inFile.fail())
    {
        cout << "Input Terminated by data mismatch" << endl;
    }
    else
    {
        cout << "Input Terminated for unkonw reason" << endl;
    }
    inFile.close();

    if (count == 0)
    {
        cout << "No data processed" << endl;
    }
    else
    {
        cout << "Item read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Avg: " << sum / count << endl;
        cout << "all data readed as below:" << endl;
        for (int i = 0; i < count; i++)
        {
            cout << i << " " << data[i] << endl;
        }
    }

    return 0;
}
