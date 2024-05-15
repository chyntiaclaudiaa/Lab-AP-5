#include <iostream>
using namespace std;

// fungsi tambah
void tambah(int *a, int *b) {
    cout << "Hasil penjumlahan: " << *a + *b << endl;
}

// fungsi kurang
void kurang(int *a, int *b) {
    cout << "Hasil pengurangan: " << *a - *b << endl;
}

// fungsi bagi
void bagi(int *a, int *b) {
    if (*b != 0) {
        cout << "Hasil pembagian: " << *a / *b << endl;
    } else {
        cout << "Tidak bisa melakukan pembagian dengan nol." << endl;
    }
}

// fungsi kali
void kali(int *a, int *b) {
    cout << "Hasil perkalian: " << *a * *b << endl;
}

int main() {
    int bil1, bil2;
    char operasi;

    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan dua bilangan: ";
    cin >> bil1 >> bil2;

    switch (operasi) {
        case '+':
            tambah(&bil1, &bil2);
            break;
        case '-':
            kurang(&bil1, &bil2);
            break;
        case '*':
            kali(&bil1, &bil2);
            break;
        case '/':
            bagi(&bil1, &bil2);
            break;
        default:
            cout << "Operasi tidak valid." << endl;
            return 1;
    }

    return 0;
}