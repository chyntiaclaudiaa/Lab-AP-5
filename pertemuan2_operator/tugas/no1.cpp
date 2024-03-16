#include <iostream> 
using namespace std;
int main () {
    system ("CLS");

    int I = 2;
    int K = 7;
    int L = 1;
    int C = 9; 
    int U = 5; 
    int S = 6; 

    /*Perhitungan Manual pada soal 1 A :
    3 - 1 = 2
    7 - 5 = 2
    8 + 2 = 10
    1 + 7 = 8
    9 + 3 = 12 
    (2 < 2) or (2 < 10) and (8 >= 12)
    = F or T and F
    = T and F
    = F yang bernilai sama dengan 0*/
    bool result_A = (3 - 1 < I) || (K - 5 < 8 + 2) && (L + 7 >= 9 + 3);
    cout<< "3 - 1 < I or K - 5 < 8 + 2 and L + 7 >= 9 + 3 = " << result_A << endl;

    /*Perhitungan Manual pada soal 1 B :
    1 % 3 = 1 
    9 / 5 = 1 karena dilakukan pembulatan kebawah
    3 * 2 - 7 = -1
    = (1 > 5) and (1 < 5) or (-1 > 0)
    = F and T or F
    = F or F
    = F yang bernilai sama dengan 0 */
    bool result_B = (L % 3 > U) && ((C/U < S) || (3 * I - K > 0));
    cout << "(L % 3 > U) and (C/U<S or 3*I-K>0) = "<< result_B << endl;
    
    /*Perhitungan Manual pada soal no 1 C
    2 - 9 = -7
    1 + 3 = 4 
    4 * 9 = 36
    = (-7 > 7) or (4 < 36)
    = F or T 
    = T yang bernilai sama dengan 1*/
    bool result_C = (I - 9 > K ) || ((L + 3) < (4 * C));
    cout << "I - 9 > K or L + 3 < 4 * C = "<< result_C << endl;

    /*Perhitungan Manual pada soal no 1 D 
    pengerjaan berdasarkan prioritas yaitu shl,and,xor,or
    3 << 2 = 0011 SHIFT LEFT 2 = 1100 (12 dalam desimal)
    7 & 1 = 0111 & 0001 = 0001 (1 dalam desimal)
    1 ^ 12 = 0001 ^ 1100 = 1101 (13 dalam desimal)
    2 | 13 = 0010 | 1101 = 1111 (15 dalam desimal)*/
    int result_D = I | K & L ^ 3 << 2 ;
    cout << "I or K and L xor 3 shl 2 = " << result_D << endl; 
    
    return 0;
}