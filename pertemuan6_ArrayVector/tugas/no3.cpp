#include <iostream>
#include <string>

using namespace std;

string perbaikiString(string terinfeksi) {
    int n = terinfeksi.length();
    int tengah = n / 2; // utk posisi tengah
    string hasil = "";

    for (int i = 0; i < tengah; i++) {  //utk kiri
        hasil += terinfeksi[tengah - i - 1];
    }

    for (int i = tengah; i < n; i++) { // utk kanan
        hasil += terinfeksi[n - 1 - (i - tengah)];
    }

    return hasil; // Mengembalikan string yang telah diperbaiki
}

int main() {
    string terinfeksi;
    cout << "Masukkan string terinfeksi maksimal 100 karakter ('A'-'Z') dan spasi : ";
    getline(cin, terinfeksi);

    if (terinfeksi.length() > 100) {
        cout << "Inputan anda melebihi 100 karakter, mohon input kembali." << endl;
        return 1;
    }

    string hasil = perbaikiString(terinfeksi);

    cout << "String asli yang telah diperbaiki: " << hasil << endl;

    return 0;
}
