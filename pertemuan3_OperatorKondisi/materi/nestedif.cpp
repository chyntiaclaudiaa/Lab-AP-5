#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int umur;

    cout << "Berapa umur kamu? ";
    cin >> umur;

    if (umur < 0) {
        cout << "Kamu bukan manusia";
    } else if (umur < 5 && umur < 11) {
        cout << "Kamu masih balita";
    } else if (umur < 12 && umur < 25) {
        cout << "Kamu masih kanak - anak";
    } else if (umur < 26 && umur < 74) {
        cout << "Kamu sudah remaja";
    } else if (umur < 75) {
        cout << "Kamu sudah dewasa";
    } else {
        cout << "Kamu sudah lansia";
    }
    
    return 0;
}
