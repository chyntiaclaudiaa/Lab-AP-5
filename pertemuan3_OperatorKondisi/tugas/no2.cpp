#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    string nama;
    int gol, ank, GP, GaTot, GaTor, GaJak, Tj;

    cout << "Masukkan nama anda : "; getline(cin, nama);
    cout << "Masukkan golongan anda : "; cin >> gol;

    if (gol == 1)
    {
        GP = 5000000;
    }
    else if (gol == 2)
    {
        GP = 3000000;
    }
    else if (gol == 3)
    {
        GP = 2500000;
    }
    else
    {
        cout << "Golongan Yang Anda Input Tidak Valid, mohon masukkan golongan 1-3";
        return 0;
    }

    cout << "Berapa Jumlah anak anda : "; cin >> ank;
    if (ank == 0){
        Tj = 0; 
    }
    else if (ank == 1 || ank == 2)
    {
        Tj = 500000 * ank;
    }
    else
    {
        Tj = 500000 * 2 + 750000 * (ank - 2);
    }

    GaJak = (GP + Tj) * 0.05;
    GaTot = GP - GaJak;

    cout << "nama        : " << nama << endl;
    cout << "Golongan    : " << gol << endl;
    cout << "Jumlah anak : " << ank << endl;
    cout << "Gaji Total  : Rp " << GaTot << endl;

    return 0;
}