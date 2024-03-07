#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    system("cls");
    string nama;
    char nim[9], kom; 
    float ipk;

    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan NIM: ";
    cin >> nim;

    cout << "Masukkan kom: ";
    cin >> kom; 

    cout << "Masukkan IPK: ";
    cin >> ipk;
    cout << fixed << setprecision(2);

    cout << "\nBerikut Adalah Data Anda:\n";
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Kom  : " << kom << endl;
    cout << "IPK  : " << ipk << endl;

}
