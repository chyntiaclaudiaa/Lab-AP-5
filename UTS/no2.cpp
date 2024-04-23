#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x;
    string GanjilGenap, tiga, lima, tujuh;
    cout << "Masukkan Bilangan Bulat : ";
    cin >> x;

    if (x % 2 == 0){
        GanjilGenap = " adalah bilangan genap";
    }else {
        GanjilGenap = " adalah bilangan ganjil";
    }

    if (x % 3 == 0){
        tiga = " habis dibagi 3";
    }else {
        tiga = " tidak habis dibagi 3";
    }

    if (x % 5 == 0){
        lima = " habis dibagi 5";
    } else {
        lima = " tidak habis dibagi 5";
    }
    
    if (x % 7 == 0){
        tujuh = " habis dibagi 7";
    } else {
        tujuh = " tidak habis dibagi 7";
    }

    cout << "Angka " << x << GanjilGenap << endl;
    cout << "Angka " << x << tiga << endl;
    cout << "Angka " << x << lima << endl;
    cout << "Angka " << x << tujuh ;
    
    return 0;
}