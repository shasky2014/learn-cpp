#include <base.h>

/*
Write a program that requests the user to enter the current world population and
the current population of the U.S. (or of some other nation of your choice). Store
the information in variables of type long long. Have the program display the percent
 that the U.S. (or other nation’s) population is of the world’s population.The
output should look something like this:

Enter the world's population: 6898758899

Enter the population of the US: 310783781

The population of the US is 4.50492% of the world population.
*/

int main()
{
    long long world_population, nation_population;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> nation_population;
    // cout << world_population << " " << nation_population << endl;
    double percent = (nation_population * 100.0) / world_population;
    cout << "The population of the U.S. is " << percent << "% of the world population. " << endl;
    return 0;
}