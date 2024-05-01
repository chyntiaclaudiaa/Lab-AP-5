#include <iostream>
using namespace std;

void garis (int karakter){
    //for (int i = 0; i < karakter; i++){
    //    cout<<"=";
    //}

    cout << string(karakter,'*');
}

int main() {
    system("CLS");
    
    garis(7);
    cout << "Program fungsi tanpa nilai pegembalian : ";
    garis(7);

    return 0;
}