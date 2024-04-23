#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int tinggi;
    cout << "masukkan tinggi diamond: ";
    cin >> tinggi;

    if (tinggi % 2 == 0)
    {
        cout << "tinggi harus ganjil";
        return 1;
    }
    else
    {
        for (int i = (tinggi / 2); i >= 0; i--)
        {
            for (int j = 0; j <= (tinggi / 2); j++)
            {
                if (j < i)
                {
                    cout << " ";
                }
                else
                {
                    cout << "* ";
                }
            }
            cout << endl;
        }

        for (int i = ((tinggi / 2) - 1); i >= 0; i--)
        {
            for (int j = 0; j <= (tinggi / 2) - i - 1; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < i + 1; k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}
