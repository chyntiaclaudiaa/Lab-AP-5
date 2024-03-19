#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    system("CLS");

    double a, b, c, x1, x2;
    //program meminta inputan dari user dan membacanya kedalam variabel a,b,dan c
    cout << "Input nilai A : "; cin >> a;
    cout << "Input nilai B : "; cin >> b;
    cout << "Input nilai C : "; cin >> c;

    //menghitung nilai diskriminan dari nilai yang di input oleh user agar lebih mudah dalam penyeleksian akar imajiner
    double D = pow(b,2) - 4 * a * c;

    if (D >= 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Dari persamaan Ax2 + Bx + C = 0 di peroleh x1 = " << x1 << " dan x2 = " << x2 << endl;
    } else {
        cout << "Akar-akar dari persamaan ini tidak valid karna merupakan akar-akar imajiner karena memiliki determinan "<< D <<"." << endl;
    }

    return 0;
}