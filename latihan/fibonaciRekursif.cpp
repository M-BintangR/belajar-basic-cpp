#include <iostream>

using namespace std;

int fibonaci(int n);

int main()
{
    int angka, hasil;

    cout << "Masukkan angka fibonaci : ";
    cin >> angka;

    hasil = fibonaci(angka);

    cout << "Hasil fibonaci adalah   : " << hasil << endl;

    return 0;
}

int fibonaci(int n)
{
    cout << "fungsi fibonaci : " << n << endl;

    if ((n == 0) || (n == 1))
    {
        return n;
    }
    else
    {
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}