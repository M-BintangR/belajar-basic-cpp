#include <iostream>

using namespace std;

int faktorial(int n);

int main()
{
    int angka, hasil;

    cout << "menghitung faktorial dari : " << endl;
    cin >> angka;

    hasil = faktorial(angka);

    cout << "Hasil faktorial adalah : " << hasil << endl;

    return 0;
}

int faktorial(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return n * (n - 1);
    }
}