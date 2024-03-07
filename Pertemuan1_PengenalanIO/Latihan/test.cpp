#include <iostream>
#include <string>
using namespace std;//mempersingkat

//#define (untuk const) 

int main () {
    system ("cls"); // untuk clear screen
    cout << "Hello World!" << endl;
    string nama;
    cout << "Nama anda: ";
    cin >> nama; 
    cout << nama << "\n";
    
    cout << "Nama anda: ";
    getline(cin, nama);
    cout << nama;

}