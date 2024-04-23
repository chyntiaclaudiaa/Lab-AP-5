#include <iostream>
using namespace std;

    bool hasil(int x) {
        if (x <= 1) {
            return false;
        }
        for (int i = 2; i * i <= x; i++) {
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

        if (hasil(x)) {
            cout << x << " adalah bilangan prima." << endl;
        } else {
            cout << x << " bukan bilangan prima." << endl;
        }

        return 0;
}