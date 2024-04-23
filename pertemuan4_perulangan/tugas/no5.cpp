#include <iostream>
#include <cmath>
using namespace std;

    bool hasil(int x) {
        if (x <= 1) {
            return false;
        }
        int sqrt_x = sqrt(x);
        for (int i = 2; i <= sqrt_x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }

    int main() {
        system("cls");
        int x;
        cout << "Masukkan bilangan: ";
        cin >> x;

        if (x <= 0) {
            cout << "Input tidak valid. Masukkan bilangan bulat positif." << endl;
            return 1;
        }

        if (hasil(x)) {
            cout << x << " adalah bilangan prima." << endl;
        } else {
            cout << x << " bukan bilangan prima." << endl;
        }

    return 0;
}