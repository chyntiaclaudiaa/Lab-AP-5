#include <iostream>
using namespace std;

int main()
{

    int panjang, lebar;
    cout << "Input panjang persegi: ";
    cin >> panjang;
    cout << "Input lebar persegi: ";
    cin >> lebar;

    for (int i = 0; i < lebar; i++)
    {
        for (int j = 0; j < panjang; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}