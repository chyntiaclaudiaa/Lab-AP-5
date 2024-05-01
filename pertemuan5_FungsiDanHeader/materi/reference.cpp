#include <iostream>
using namespace std;


int sumnumber(int& num1, int& num2){
        num1 = 15;
        num2 = 25;
        return num1 + num2;
}

    int main() {
        system("CLS");
        
        int num1 = 10, num2 = 20;

        cout << "Hasil = " << sumnumber(num1, num2) << endl;

        cout << "nilai num 1 = " << num1 << endl;
        cout << "nilai num 2 = " << num1 << endl;

        return 0;
}