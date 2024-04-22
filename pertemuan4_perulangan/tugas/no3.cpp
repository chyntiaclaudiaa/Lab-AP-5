#include <iostream>
using namespace std;

int main() {
    int tahun, interval;
    
ulang:
    cout << "Masukkan tahun (1000 <= tahun <= 9000): "; 
    cin >> tahun;
    cout << "Masukkan interval (-tahun <= interval <= 9999-tahun): "; 
    cin >> interval;

    // Memeriksa apakah tahun dan interval berada dalam rentang yang valid
    if (tahun <= 1000 || tahun >= 9000 || interval <= -tahun || interval >= 9999 - tahun) {
        cout << "Input tidak valid." << endl;
        goto ulang; // Kembali ke label ulang jika input tidak valid
    }

    int i = 0;
    while (i <= abs(interval)) { 
        int kabisat;
        if (interval > 0) // Jika interval positif, tambahkan nilai iterasi ke tahun
            kabisat = tahun + i;
        else
            kabisat = tahun - i; // Jika interval negatif, kurangi nilai iterasi ke tahun

        if ((kabisat % 4 == 0 && kabisat % 100 != 0) || (kabisat % 400 == 0)) // pemeriksaan apakah tahun kabisat atau bukan
            cout << kabisat << " kabisat" << endl;
        else 
            cout << kabisat << " bukan kabisat" << endl;

        i++; // peningkatan iterasi untuk memeriksa tahun selanjutnya sesuai interval user
    }

    return 0;
}
