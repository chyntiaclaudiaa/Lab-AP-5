#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *kata = "K O M P U T E R";

    const char *ptr = kata;

    int count = 0;
    while (*ptr != strlen(kata))
    {
        if (*ptr != ' '){ // agar melewatkan spasi
            count++;
        }
        if (count == 5){
            break; 
        }
        ptr++;
    }

    cout << "Huruf kelima dari kata " << kata << " adalah: " << *ptr << endl;

    return 0;
}