#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    float b = 6;

    int hasil;

    // operator aritmatika +, -, *, /, %

    // penjumlahan
    hasil = a + b;
    cout << "Hasil penjumlahan adalah : " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << "Hasil pengurangan adalah : " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << "Hasil perkalian adalah : " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << "Hasil pembagian adalah : " << hasil << endl;

    // modulus
    hasil = a / b;
    cout << "Hasil modulus adalah : " << hasil << endl;

    // tanda kurung
    hasil = (a + b) * b;
    cout << "Hasil (a + b) * b = " << hasil << endl;

    return 0;
}