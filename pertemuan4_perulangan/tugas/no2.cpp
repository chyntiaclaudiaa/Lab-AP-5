#include <iostream>
#include <cctype> //untuk fungsi toupper dan tolower
using namespace std;

int main() {
    system("CLS");
    
    string newStr,kalimat;
    int jumlahDihapus = 0; // pemberian nilai awal sebanyak 0 untuk jumlah huruf yang dihapus
    char huruf;
    cout << "Masukkan Sebuah Kalimat : "; 
    getline(cin, kalimat); // agar inputan user dibaca secara keseluruhan termasuk spasi 
    cout << "Masukkan Sebuah Huruf Yang ingin di hapus : "; 
    cin >> huruf;
    

    for (char c : kalimat) {
        if (c != tolower(huruf) && c != toupper(huruf)) { // agar program dapat jalan secara baik walaupun terdapat perbedaan huruf kapital dan huruf kecil
            newStr += c; // agar menambahkan ke string baru selain penyeleksian if sebelumnya
        } else {
            jumlahDihapus++; //jika ada huruf yang terhapus maka bertambah 1 begitupun seterusnya
        }
    }

    cout << endl; 
    cout << "Kalimat setelah pengahapusan huruf : " << newStr ; 
    cout << "\nJumlah huruf yang dihapus          : " << jumlahDihapus;
    
    return 0;
}