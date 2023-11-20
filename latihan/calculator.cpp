#include <iostream>

using namespace std;

int main()
{
    int a, b, hasil;
    char aritmatika;

    cout << "=============== KALKULATOR SEDERHANA ==================" << endl;

    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "Masukkan nilai kedua   : ";
    cin >> b;
    cout << "Masukkan operator aritmatika (+,-,*,/,%) : ";
    cin >> aritmatika;

    // SWITCH STATEMENT

    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;
    default:
        hasil = a % b;
    }

    cout << "Hasil operator anda : " << hasil << endl;

    cout << "Selesai" << endl;

    return 0;
}