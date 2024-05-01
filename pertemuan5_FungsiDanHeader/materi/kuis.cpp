#include <iostream>
using namespace std;

int hitungPangkat(int bilangan, int pangkat)
{
    int hasil = 1;
    for (int i = 0; i < pangkat; ++i) {
        hasil *= bilangan;
    }
    return hasil;
}

int main()
{
    int bilangan;
    int n;

    bilangan = 3;
    cout << "Masukkan pangkat: ";
    cin >> n;

    int hasil = hitungPangkat(bilangan, n);
    cout << "Hasil " << bilangan << " (" << n << ") =  " << hasil << endl;

    return 0;
}
