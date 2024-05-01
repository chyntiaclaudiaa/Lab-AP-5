#include <iostream>
using namespace std;

int Num3 = 10; //variabel global

int sumNumber (int Num1, int Num2 = 10){
    //variabel lokal
    return Num1 + Num2 + Num3;
}



int main() {
    system("CLS");
    
    int Hasil = sumNumber(5); // 5 itu pemberian nilai utk num1

    cout << Num3 << endl;
    cout<< "Hasil = " << Hasil;
    
    return 0;
}