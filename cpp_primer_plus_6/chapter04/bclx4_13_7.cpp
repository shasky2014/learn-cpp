#include <base.h>
#include <string>
// #include <cstring>
struct pizza
{
    string company;
    float diameter;
    float weight;
};
void showPizza(pizza p)
{
    cout << "Company: " << p.company
         << ",Diameter: " << p.diameter
         << " cm, Weight: " << p.weight << " g" << endl;
}
void cinPizza(pizza &p)
{
    cout << "Enter diameter: ";
    cin >> p.diameter;
    cout << "Enter weight: ";
    cin >> p.weight;
    cout << "Enter company name: ";
    cin.get();
    getline(cin, p.company);
    // return p;
}
int main()
{
    /*
    7. William Wingate runs a pizza-analysis service. For each pizza, he needs to record
    the following information:
        The name of the pizza company, which can consist of more than one word
        The diameter of the pizza
        The weight of the pizza
    Devise a structure that can hold this information and write a program that uses a
    structure variable of that type.The program should ask the user to enter each of the
    preceding items of information, and then the program should display that information. Use cin (or its methods) and cout.
    */
    pizza *p1 = new pizza;
    cinPizza(*p1);
    showPizza(*p1);

    return 0;
}
