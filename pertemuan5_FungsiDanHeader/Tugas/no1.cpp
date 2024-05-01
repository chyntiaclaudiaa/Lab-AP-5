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

// Fungsi untuk menghitung deret dan mengembalikan string yang berisi hasil FizzBuzz dari deret tersebut
string hitungDeret(int x, int &bilakhir)
{
    string hasil = "";
    for (int i = 1; i <= x; i++)
    {
        int deretsgt = (i * (i + 1));
        hasil += fizzBuzz(deretsgt); // Menggunakan fungsi fizzBuzz untuk setiap nilai dalam deret
        if (i != x){
            hasil += ", ";
        }
        
        if (deretsgt % 3 != 0 && deretsgt % 5 != 0){
            bilakhir = deretsgt; //ini untuk menyimpan nilai akhir yang tidak memenuhi aturan fizzbuz untuk dipakai di tipe data
        }
    }
    return hasil;
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
    string hasilDeret = hitungDeret(x, bilakhir);

    cout << hasilDeret << endl;
    cout << "Tipe data dari " << bilakhir << " adalah " << typeid(bilakhir).name() << endl; // menggunakan library typeinfo untuk mengecek tipe data

    return 0;
}