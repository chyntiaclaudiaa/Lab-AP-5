#include <iostream>
using namespace std;

int main() {
    system("CLS"); 

    int n, hasil = 0; 
    cout << "Masukkan batasan : "; cin >> n;

    for (int i = 0; i <= n; i++) { 
        if (i % 2 == 0) { // menyeleksi bilangan genap
            hasil += i * i; // Penjumlahan kuadrat bilangan genap
        }
    } 

    cout << "hasil adalah " << hasil;
    
    return 0;
}
