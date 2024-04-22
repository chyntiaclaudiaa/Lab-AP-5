#include <iostream>
#include <string>

using namespace std;

int main() {
    system("CLS");
    
    int n;
    cout << "Masukkan angka dengan interval n (1 <= n <= 10000): ";
    cin >> n;

    if (n < 1 || n > 10000)
    {
        cout << "Interval n tidak valid.";
        return 1;
    }

    string hore = "H"; 
    for (int i = 0; i < n; ++i) 
    {
        hore += "o";
    }
    hore += "r";  
    for (int i = 0; i < n; ++i)
    {
        hore += "e";  
    }
    for (int i = 0; i < n; ++i)
    {
        hore += "!"; 
    }

    cout << hore << endl;

    return 0;
}
