#include <base.h>
#include <cctype>
#include <string>
#include <cstring>

struct Contributor
{
    string name;
    double contribution;
};

int main()
{
    /*
    7. Write a program that reads input a word at a time until a lone q is entered.The
    program should then report the number of words that began with vowels, the num-
    ber that began with consonants, and the number that fit neither of those categories.
    One approach is to use isalpha() to discriminate between words beginning with
    letters and those that don’t and then use an if or switch statement to further iden-
    tify those passing the isalpha() test that begin with vowels. A sample run might
    look like this:
    Enter words (q to quit):
    The 12 awesome oxen ambled
    quietly across 15 meters of lawn. q
    5 words beginning with vowels
    4 words beginning with consonants
    2 others    */
    const int MAX_SIZE = 50;
    char word[MAX_SIZE];
    cout << "Enter words (q to quit): " << endl;
    int vowels = 0, consonants = 0, others = 0;
    while (cin >> word && strcmp(word, "q") != 0)
    {
        // cout << word << endl;
        if (isalpha(word[0]))
        {
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
                vowels++;
            else
                consonants++;
        }
        else
            others++;
    }
    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;

    return 0;
}
