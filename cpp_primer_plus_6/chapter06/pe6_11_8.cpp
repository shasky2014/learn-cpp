#include <base.h>
#include <cctype>
#include <string>
#include <cstring>
#include <fstream>

int main()
{
    /*
    8. Write a program that opens a text file, reads it character-by-character to the end of
    the file, and reports the number of characters in the file.
    */
    const int MAX_SIZE = 50;
    char filename[] = "pe6_11_8.txt";
    cout << "read file:" << filename << endl;
    char ch;
    int nummber = 0;
    ifstream inFile;
    inFile.open(filename);
    inFile >> noskipws;
    while (!inFile.eof())
    {
        inFile >> ch;
        nummber++;
    }
    cout << nummber << " characters in the file." << endl;
    inFile.close();
    return 0;
}
