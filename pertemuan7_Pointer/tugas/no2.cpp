#include <iostream>

using namespace std;

int main()
{
    system("CLS");
    int x, *px;
    x = 25;

    // Persamaan 1
    px = &x; // px menyimpan alamat dari x

    // Persamaan 2
    *px = x; // nilai di alamat yang ditunjuk oleh px (yaitu x) di-set menjadi nilai x (25)

    cout << "Nilai px: " << px << endl;            // Output: Nilai px: (alamat dari x)
    cout << "Nilai di alamat px: " << *px << endl; // Output: Nilai di alamat px: 25

    /*Jadi, (1) px = &x; dan (2) *px = x; tidak ekuivalen, karena

    (1) Menginisialisasi pointer px untuk menunjuk ke alamat x.
    (2) Mengatur nilai dari alamat yang ditunjuk oleh px. */

    return 0;
}