#include <iostream>
#include <cmath>

using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukan Prima" << endl;
    } else {
        int i = 2;
        int akarKuadrat = sqrt(n); 
        while (i <= akarKuadrat) {
            if (n % i == 0) {
                cout << n << " bukan Prima" << endl;
                return 0;
            }
            i++;
        }
        cout << n << " adalah Prima" << endl;
    }

    return 0;
}
