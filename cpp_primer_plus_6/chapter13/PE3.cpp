#include <iostream>
#include <cstring>
#include "PE3_dma.h"
using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::strcpy;
using std::strlen;

int main(int argc, char const *argv[])
{
    abcDMA *dmas[4];
    char *label_tmp;
    int rating_tmp;
    char color[lacksDMA::COL_LEN];
    char *style;
    char choice;

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ": Enter new DMA data ---------" << endl;

        cout << "Enter label: " << endl;
        label_tmp = new char[20];
        cin.getline(label_tmp, 20);
        cout << "Enter rating: " << endl;
        cin >> rating_tmp;

        cout << "choise dma type: [0 for baseDMA, 1 for lacksBMA and 2 for hasBMA]" << endl;
        cin >> choice;
        cin.get();

        switch (choice)
        {
        case '0':

            dmas[i] = new baseDMA(label_tmp, rating_tmp);
            break;
        case '1':
            cout << "Enter color: " << endl;
            cin.getline(color, lacksDMA::COL_LEN);
            dmas[i] = new lacksDMA(color, label_tmp, rating_tmp);
            break;
        case '2':
            cout << "Enter style: " << endl;
            style = new char[lacksDMA::COL_LEN];
            cin.getline(style, lacksDMA::COL_LEN);
            dmas[i] = new hasDMA(style, label_tmp, rating_tmp);
            break;
        default:
            cout << "error choice, use baseDMA" << endl;
            dmas[i] = new baseDMA(label_tmp, rating_tmp);
            break;
        }
    }

    cout << "show all dmas info: ---------------\n";
    for (int i = 0; i < 4; i++)
    {
        dmas[i]->view();
    }

    cout << "delete all dmas: ---------------\n";
    for (int i = 0; i < 4; i++)
    {
        delete dmas[i];
    }

    return 0;
}
