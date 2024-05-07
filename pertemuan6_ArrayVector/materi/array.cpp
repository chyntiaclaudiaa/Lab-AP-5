#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int nilai[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << "Alamat nilai [ " << 1 << " ] = " << &nilai[i] << "= " << nilai[i] << endl;
    }

    // cara 1
    int *ptr = nilai; // pointer
    *(ptr + 2) = 6;   // mengubah nilai dari array indeks [2]

    /*cara 2
    nilai [2] = 6;*/

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Alamat nilai [ " << 1 << " ] = " << &nilai[i] << "= " << nilai[i] << endl;
    }
    
    cout << endl;

    cout << "Ukuran array : " << sizeof(nilai) << " byte" << endl;
    cout << "Julah member array = " << sizeof(nilai) / sizeof(int) << endl;

    return 0;
}