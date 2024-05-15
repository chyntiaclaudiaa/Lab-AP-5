#include <iostream>

using namespace std;

int main()
{
    system("CLS");
    int ganjil[10]; 
    int indeks = 0;

    for (int i = 1; i <= 20; ++i) // perulangan utk mengisi array bil ganjil
    {
        if (i % 2 != 0)
        {
            ganjil[indeks] = i;
            indeks++;
        }
    }

    for (int i = 0; i < 10; ++i) 
    {
        cout << "Bilangan ganjil: " << ganjil[i] // tampilkan bil ganjil
             << ", Alamat memori: " << &ganjil[i] << endl; // menampilkan alamat memori dari bil ganjil
    }

    return 0;
}