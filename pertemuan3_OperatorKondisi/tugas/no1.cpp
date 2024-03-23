#include <iostream>
using namespace std;

int main() {
    system("CLS"); 

    int bil;

    cout << "Masukkan bilangan : ";
    cin >> bil;
    
    (bil % 2 == 0) ? cout << "bilangan adalah genap\n" : cout << "bilangan adalah ganjil\n";
        
    return 0;
}
