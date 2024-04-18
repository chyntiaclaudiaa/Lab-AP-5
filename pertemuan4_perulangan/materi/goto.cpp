#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int angka;

ulang:
    cout << "Masukan angka: ";
    cin >> angka;
    if (angka < 1 || angka > 10)
    {
        goto ulang;
    }

    return 0;
}