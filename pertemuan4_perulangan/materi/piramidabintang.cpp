#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int tinggi;
    cout << "input tinggi";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++)
    {
        for (int j = tinggi; j > i + 1; i++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}