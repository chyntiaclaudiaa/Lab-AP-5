#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int nilai [2] [2] = {1,2,3,4};
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "nilai[" << i << "] [" << j << "]" <<  nilai [i] [j] << endl;
        }
    }

    /*array <int, 2> nilai;
    array <array <int, 2>, 2 > nilai = {1,2,3,4};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "nilai[" << i << "] [" << j << "]" <<  nilai [i] [j] << endl;
        }
    } */
    
    return 0;
}