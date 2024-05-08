#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<int> deretanAngka;
    string x;
    cout << "Masukkan deret angka yang dipisahkan oleh spasi: ";
    getline(cin, x);

    istringstream stream(x);
    int angka;
    while (stream >> angka)
        deretanAngka.push_back(angka);

    cout << "Panjang vektor: " << deretanAngka.size() << endl;

    for (auto it = deretanAngka.begin(); it != deretanAngka.end(); ++it) {
        cout << *it << endl;
        deretanAngka.erase(it);
        --it;
    }

    cout << "Panjang vektor setelah dihapus: " << deretanAngka.size() << endl;

    return 0;
}