#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Masukkan panjang segitiga : ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int k = n; k >= i; k--)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << "pola ke 2 \n";

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}