#include <iostream>
#include <typeinfo>
using namespace std;

// Fungsi untuk menghasilkan output "Fizz", "Buzz", atau "FizzBuzz" berdasarkan aturan FizzBuzz
string fizzBuzz(int x)
{
    string hasil;
    (x % 3 == 0 && x % 5 == 0) ? hasil = "FizzBuzz " : (x % 3 == 0) ? hasil = "Fizz ": (x % 5 == 0)   ? hasil = "Buzz ": (hasil = to_string(x)); 
    return hasil;
}

// Fungsi untuk menghitung deret dan menyimpan hasil FizzBuzz dari deret tersebut ke dalam parameter referensi
void hitungDeret(int x, string &hasilDeret, int &bilakhir)
{
    for (int i = 1; i <= x; i++)
    {
        int deretsgt = (i * (i + 1));
        hasilDeret += fizzBuzz(deretsgt); // Menggunakan fungsi fizzBuzz untuk setiap nilai dalam deret
        if (i != x){
            hasilDeret += ", ";
        }
        
        if (deretsgt % 3 != 0 && deretsgt % 5 != 0){
            bilakhir = deretsgt; // Ini untuk menyimpan nilai akhir yang tidak memenuhi aturan fizzbuz untuk dipakai di tipe data
        }
    }
}

int main()
{
    int x;
    cout << "Masukkan angka : ";
    cin >> x;

    if (x < 3 || x > 100){
        cout << "Input tidak valid, berikan nilai dengan rentang 3 - 100" << endl;
        return 1;
    }

    int bilakhir = 0;
    string hasilDeret;
    hitungDeret(x, hasilDeret, bilakhir);

    cout << hasilDeret << endl;
    cout << "Tipe data dari " << bilakhir << " adalah " << typeid(bilakhir).name() << endl; // menggunakan library typeinfo untuk mengecek tipe data

    return 0;
}