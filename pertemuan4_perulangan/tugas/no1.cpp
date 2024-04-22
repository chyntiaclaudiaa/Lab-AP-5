#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int n;
    cout << "Masukkan hingga suku ke: "; // meminta inputan pengguna
    cin >> n;

    int hasil = 1;  // pemberian nilai awal untuk hasil
    cout << hasil << " ";  //untuk menampilkan hasil awal yaitu 1 dan pemberian spasi setelahnya

        for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) { // jika i adalah genap ditambah 5 
            hasil += 5; // lalu hasil ditambah dengan 5 sehingga pada berulangan berikutnya hasil adalah genap
        } else {
            hasil += 3; // jika i ganjil maka ditambah 3, lalu hasil yang dari perulangan sebelumnya ditambah 3 maka menghasilkan hasil ganjil
        }
        cout << hasil << " "; // untuk menambahkan spasi setelah perulangan agar lebih rapi
    }
    
    return 0;
}
