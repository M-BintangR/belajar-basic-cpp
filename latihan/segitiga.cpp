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

    cout << "pola ke 3 \n";

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

    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << "pola ke 4 \n";

    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = n; j >= (2 * i - n); j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}