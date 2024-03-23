#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float bb, tb, total, tbtot, bmi;
    cout << "masukkan berat badan anda (kg): ";
    cin >> bb;
    cout << "masukkan tinggi badan kamu dalam meter: ";
    cin >> tb;
    tbtot = (((tb*100) / 100) * ((tb * 100) / 100));
    bmi = bb / tbtot;
    cout << fixed << setprecision (2);
    cout << "BMI anda: " << bmi;
    cout << "\nKategori Berat badan : ";
    if (bmi < 18.5) {
        cout << "Berat badan kurang";
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Berat badan normal";
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Berat badan berlebih";
    } else if (bmi >= 30) {
        cout << "Obesitas ";
    }
    return 0;
}
