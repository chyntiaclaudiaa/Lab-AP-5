#include <iostream>
using namespace std;

int main()
{
    int tinggi;
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    for (int i = tinggi; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << tinggi << " ";
        }
        cout << endl; // Pindah ke baris berikutnya setelah setiap baris bintang
    }

    return 0;
}