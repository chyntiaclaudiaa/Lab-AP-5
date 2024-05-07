#include <iostream>
#include <array>
using namespace std;

int main()
{
    system("CLS");

    // int nilai [5];

    array<int, 5> nilai;

    for (int i = 0; i < 5; i++)
    {
        nilai[i] = i;
        cout << "nilai [ " << i << "] = " << nilai[i] << endl;
        cout << "adress : " << &nilai[i] << endl;
    }

    cout << "Ukuran : " << nilai.size() << endl;
    cout << "Adress awal : " << nilai.begin() << endl;
    cout << "Adress akhir : " << nilai.end() << endl;

    cout << "Nilai ke 2: " << nilai.at(2) << endl;

    return 0;
}