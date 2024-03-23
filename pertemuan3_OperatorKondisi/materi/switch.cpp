#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int umur;
    string hasil;

    cout << "umur kamu berapa : ";
    cin >> umur;

    switch (umur)
    {
    case 0:
    {
        cout << "kamu bukan manusia";
        break;
    }
    case 1 ... 5:
    {
        cout << "kamu balita";
        break;
    }
    case 6 ... 17:
    {
        cout << "kamu remaja";
        break;
    }
    case 18 ... 35:
    {
        cout << "kamu dewasa";
        break;
    }
    case 36 ... 64:
    {
        cout << "kamu lansia";
        break;
    }

        return 0;
    }
}