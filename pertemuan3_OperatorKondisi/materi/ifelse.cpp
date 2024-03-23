#include <iostream>
using namespace std;

int main() {
    system("CLS"); 
    char nilai;
    cout << "Berapa nilai kamu? ";
    cin >> nilai;

    if (nilai == 'A') {
        cout << "Bagus, pertahankan";
    } else if (nilai == 'B') {
        cout << "Pertahankan";
    } else if (nilai == 'C') {
        cout << "Waduh";
    } else if (nilai == 'D') {
        cout << "Astaga";
    } else if (nilai == 'E') {
        cout << "Mampus";
    } else {
        cout << "Invalid";
    }

    return 0;
}