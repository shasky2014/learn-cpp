#include <cctype>
#include <string>
#include <fstream>
#include <base.h>

struct Contributor
{
    string name;
    double contribution;
};

int main()
{
    /*
    9. Do Programming Exercise 6 but modify it to get information from a file.The first
    item in the file should be the number of contributors, and the rest of the file should
    consist of pairs of lines, with the first line of each pair being a contributor’s name
    and the second line being a contribution.That is, the file should look like this:
    */
    string filename = "pe6_11_9.txt";
    ifstream inFile;
    inFile.open(filename);

    if (!inFile)
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }

    int number;
    cout << "Read data from file: " << filename << endl;
    inFile >> number;
    Contributor *contributors = new Contributor[number];
    cout << "Get number: " << number << endl;
    cout << "Show all datas: " << endl;

    for (int i = 0; i < number; i++)
    {
        inFile.get();
        getline(inFile, contributors[i].name); // 使用getline支持名字中有空格
        inFile >> contributors[i].contribution;
        cout << contributors[i].name << endl
             << contributors[i].contribution << endl;
    }

    return 0;
}
