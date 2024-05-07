#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk memperbaiki string yang terinfeksi virus
string perbaikiString(string terinfeksi)
{
    int tengah = terinfeksi.length() / 2; // utk posisi tengah

    string kiri = terinfeksi.substr(0, tengah); //mulai dari indeks 0  hingga tengah adalah bagian kiri
    string kanan = terinfeksi.substr(tengah); //mulai dari indeks tengah hingga akhir adalah bagian kanan

    // balikkan kedua bagian
    reverse(kiri.begin(), kiri.end());
    reverse(kanan.begin(), kanan.end());

    // menggabungkan kembali kedua bagian untuk perbaikan string asli
    return kiri + kanan;
}

int main()
{
    string terinfeksi;
    cout << "Masukkan string terinfeksi maksimal 100 karakter huruf kapital dan spasi : ";
    getline(cin, terinfeksi);

    // Periksa apakah string terinfeksi melebihi 100 karakter
    if (terinfeksi.length() > 100)
    {
        cout << "Inputan anda melebihi 100 karakter, mohon input kembali." << endl;
        return 1; 
    }

    string hasil = perbaikiString(terinfeksi);

    // Tampilkan hasil
    cout << "String asli yang telah diperbaiki: " << hasil << endl;

    return 0;
}
