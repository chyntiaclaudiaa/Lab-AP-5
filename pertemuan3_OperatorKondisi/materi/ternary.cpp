#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int tb;
    string hasil;

    cout << "tinggi badan kamu berapa : ";
    cin >> tb;

    hasil = (tb > 200) ? "kamu berbakat jadi pemain basket " : "kamu tidak berbakat hhaa";

    cout << hasil << endl;

    return 0;
}