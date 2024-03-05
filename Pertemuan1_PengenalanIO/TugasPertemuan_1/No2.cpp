#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    // Menggunakan getline Tidak mengabaikan spasi atau karakter whitespace lainnya setelah membaca baris.
    string namaGetline;
    cout << "Masukkan Nama (getline): ";
    getline(cin, namaGetline);
    cout << "Nama yang dimasukkan (getline): " << namaGetline << endl;

    // Menggunakan cin Mengabaikan spasi atau karakter whitespace lainnya setelah memasukkan nilai ke variabel.
    string namaCin;
    cout << "Masukkan Nama (cin): ";
    cin >> namaCin;
    cout << "Nama yang dimasukkan (cin): " << namaCin << endl;

}
