#include <iostream>
using namespace std;

int main() {
    system("cls");
    string namasaya;
    cout << "Masukkan nama anda: ";
    cin >> namasaya;
    
    cout << "Nama setelah modifikasi: ";
    
    for (char c : namasaya) {
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            cout << 'o' ;
        } else {
            cout << c;
        }
    }

    cout << endl;
    
    return 0;
}