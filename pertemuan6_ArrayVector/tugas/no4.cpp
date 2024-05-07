#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> deretanAngka;
    string input;
    int Awal = 0;

    cout << "Masukkan deret angka yang dipisahkan oleh spasi: ";
    getline(cin, input);

    while (Awal < input.size()) // Memproses input dan menyimpan angka-angka ke dalam vektor
    {
        int Spasi = input.find(' ', Awal); // Mencari posisi spasi dalam input
        if (Spasi == input.size()) // Jika tidak ada spasi lagi, berarti angka terakhir dalam input
            Spasi = input.size();

        string angkaStr = input.substr(Awal, Spasi - Awal); // mengambil angka dari input dan konversi jadi integer
        int angka = stoi(angkaStr);
        deretanAngka.push_back(angka);

        Awal = Spasi + 1; // perbarui posisi awal untuk mencari angka berikutnya
    }

    cout << "Panjang vektor : " << deretanAngka.size() << endl;

    while (!deretanAngka.empty()) //empty untuk cek kosong tidaknya deretan angka
    {
        cout << deretanAngka.front() << endl;     // Menampilkan angka
        deretanAngka.erase(deretanAngka.begin()); // Menghapus angka dari vektor
    }

    cout << "Panjang vektor setelah dihapus: " << deretanAngka.size() << endl;

    return 0;
}
