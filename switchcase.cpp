#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka = ";
    cin >> a;

    // SWITCH STATEMENT

    switch (a)
    {
    case 5:
        cout << "anda memasukkan angka 5" << endl;
        break;
    case 6:
        cout << "anda memasukkan angka 6" << endl;
        break;
    case 7:
        cout << "anda memasukkan angka 7" << endl;
        break;
    case 8:
        cout << "anda memasukkan angka 8" << endl;
        break;
    case 9:
        cout << "anda memasukkan angka 9" << endl;
        break;
    default:
        cout << "anda memasukkan angka 10" << endl;
    }

    return 0;
}