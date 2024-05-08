#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> 

using namespace std;

// Fungsi untuk menghitung efisiensi dari suatu peran
double HitungEfisiensi(vector<int>& peran) {
    double efisiensi = sqrt(pow(peran[0], 2) + pow(peran[1], 2) + pow(peran[2], 2));
    return efisiensi;
}

// Fungsi untuk mencari peran optimal 
double PeranOptimal(vector<vector<int>>& x) {
    double EfisienMax = 0;
    vector<int> peran_optimal;

    // Perulangan untuk mencari kombinasi peran optimal
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (i != j && j != k && k != i) { 
                    vector<int> peran = {x[0][i], x[1][j], x[2][k]};
                    double efisiensi = HitungEfisiensi(peran);
                    if (efisiensi > EfisienMax) { 
                        EfisienMax = efisiensi;
                        peran_optimal = peran;
                    }
                }
            }
        }
    }

    return EfisienMax;
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
