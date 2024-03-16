#include <iostream>
#include <cmath>
using namespace std;

#define phi 3.14 // konstanta pi

//rumus-rumus untuk menghitung luas permukaan dan volume masing-masing bangun ruang
#define LP_Kerucut(r, t) (phi * (r) * ((r) + sqrt(pow((t), 2) + pow((r), 2))))
#define V_Kerucut(r, t) ((1.0 / 3.0) * phi * pow((r), 2) * (t))

#define LP_LIMAS_SGT(a, t) ((0.5 * (a) * (t)) + (3 * (0.5 * (a) * (t))))
#define V_LIMAS_SGT(a, t, ts) ((1.0 / 3.0) * (0.5 * (a) * (ts)) * t)

#define LP_BOLA(r) (4 * phi * pow((r), 2))
#define V_BOLA(r) ((4.0 / 3.0) * phi * pow((r), 3))

#define LP_PRISMA(a, t, s, tp) ((3 * s) * tp * (a * t))
#define V_PRISMA(a, t, tp) ((0.5 * (a) * (t)) * tp)
int main()
{
    system("CLS");
    double r, t, a, s, ts, tp;
    cout << "Masukkan jari-jari kerucut: ";
    cin >> r;
    cout << "Masukkan tinggi kerucut: ";
    cin >> t;

    cout << "Luas Permukaan Kerucut: " << LP_Kerucut(r, t) << " cm" << endl;
    cout << "Volume Kerucut: " << V_Kerucut(r, t) << " cm^3" << endl;

    cout << "\nMasukkan alas limas segitiga: ";
    cin >> a;
    cout << "Masukkan tinggi limas segitiga: ";
    cin >> t;    
    cout << "Masukkan tinggi segitiga: ";
    cin >> ts;

    cout << "Luas Permukaan Limas Segitiga: " << LP_LIMAS_SGT(a, t) << endl;
    cout << "Volume Limas Segitiga: " << V_LIMAS_SGT(a, t, ts) << endl;

    cout << "\nMasukkan jari-jari bola: ";
    cin >> r;

    cout << "Luas Permukaan Bola: " << LP_BOLA(r) << endl;
    cout << "Volume Bola: " << V_BOLA(r) << endl;

    cout << "\nMasukkan sisi prisma:";
    cin >> s;
    cout << "Masukkan tinggi prisma: ";
    cin >> tp;
    cout << "Masukkan panjang alas prisma: ";
    cin >> a;
    cout << "Masukkan tinggi alas : ";
    cin >> t;

    cout << "Luas Permukaan Prisma: " << LP_PRISMA(a, t, s, tp) << endl;
    cout << "Volume Prisma: " << V_PRISMA(a, t, tp) << endl;

    return 0;
}