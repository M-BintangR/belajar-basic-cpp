#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka = ";
    cin >> a;

    // if else statment
    // kondisi dalam boolean
    if (a == 3)
    {
        cout << "angka sama dengan 3" << endl;
    }
    else if (a == 4)
    {
        cout << "angka sama dengan 4" << endl;
    }
    else
    {
        cout << "angka selain dari 4 dan 3" << endl;
    }

    cout << "selesai" << endl;

    return 0;
}