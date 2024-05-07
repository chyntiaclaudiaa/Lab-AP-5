#include <iostream>
#include <vector>
#include <cmath> 
#include <algorithm> //untuk next_permutation
#include <iomanip> 

using namespace std;

// Fungsi untuk menghitung efisiensi dari suatu peran
double HitungEfisiensi(vector<int> peran) {
    double efisiensi = 0;
    for(int peran_i : peran) { // perhitungan menggunakan rumus efisiensi
        efisiensi += pow(peran_i, 2);
    }
    return sqrt(efisiensi);
}

// Fungsi untuk mencari peran optimal 
double PeranOptimal(vector<vector<int>>& x) {
    double EfisiensiMaks = 0;
    vector<int> peran_optimal;
    
    // Membuat vektor indeks yang akan digunakan untuk permutasi
    vector<int> indeks = {0, 1, 2};
    
    // permutasi mencari peran mana yang memberikan efisiensi maksimal
    do {
        double efisiensi = HitungEfisiensi({x[0][indeks[0]], x[1][indeks[1]], x[2][indeks[2]]});
        if (efisiensi > EfisiensiMaks) { // Membandingkan efisiensi dari permutasi saat ini dengan efisiensi maksimal yang telah ditemukan sebelumnya
            EfisiensiMaks = efisiensi;
            peran_optimal = {x[0][indeks[0]], x[1][indeks[1]], x[2][indeks[2]]};
        }
    } while (next_permutation(indeks.begin(), indeks.end())); // Menggunakan next_permutation untuk mencari semua permutasi
    
    return EfisiensiMaks;
}

int main() {
    vector<vector<int>> x(3, vector<int>(3));

    cout << "Masukkan nilai-nilai matriks (baris per baris) beserta indeksnya:\n";
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << "Input angka indeks " << i+1 << "," << j+1 << " = ";
            cin >> x[i][j];
        }
    }

    cout << "Matriks yang dimasukkan:\n";
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    double efisiensi_optimal = PeranOptimal(x); 
    cout << "Efisiensi = " << fixed << setprecision(1) << efisiensi_optimal << endl;

    return 0;
}
