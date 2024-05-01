#include <iostream>
using namespace std;

int operasi(int num1, int num2)
{
    return num1 * num2;
}
float operasi(float num1, float num2)
{
    return num1 / num2;
}
int main()
{
    system("CLS");

    int x = 5, y = 4;
    float n = 2.3, m = 2.2;

    cout << "Hasil Penjumlahan : " << operasi(x, y) << endl;
    cout << "Hasil Pembagian : " << operasi(n, m) << endl;

    return 0;
}