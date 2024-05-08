#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk segitiga pascal
long long sgtpascal(int n, int k)
{
    if (k > n - k){
        k = n - k;
    }
    long long hasil = 1;
    for (int i = 0; i < k; ++i){
        hasil *= (n - i);
        hasil /= (i + 1);
    }
    return hasil;
}

// Fungsi untuk tampilkan di output
void tampilkan(int t)
{
    for (int baris = 0; baris < t; ++baris){
        for (int spasi = 0; spasi < t - baris - 1; ++spasi){
            cout << " ";
        }
        for (int kolom = 0; kolom <= baris; ++kolom){
            cout << sgtpascal(baris, kolom) << " ";
        }
        cout << endl;
    }
}

int main()
{
    system("cls");
    cout << "========== Segitiga Pascal ==========\n";
    int t;
    cout << "Masukkan tinggi segitiga Pascal: ";
    cin >> t;

    if (t < 1 || t > 30){
        cout << "tinggi harus dalam rentang 1 sampai 30" << endl;
        return 1;
    }

    tampilkan(t);

    int x, y;
    cout << "Masukkan dua buah bilangan x dan y (baris dan kolom)\ndengan interval (x >=1, y <= 30 | y <=x ) : ";
    cin >> x >> y;

    if (x < 1 || x > 30 || y < 1 || y > 30 || y > x){
        cout << "Input tidak valid. mohon masukkan bilangan dengan interval (x >=1, y <= 30 | y <=x )" << endl;
        return 1;
    }

    long long nilai = sgtpascal(x - 1, y - 1);
    cout << "Nilai pada indeks [" << x << "][" << y << "] = " << nilai << endl;

    system("pause");
    return 0;
}