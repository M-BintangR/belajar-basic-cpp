#include <iostream>

using namespace std;

// FUNGSI REKURSIF TERBATAS
int pangkatIterasi(int a, int b)
{
    int hasil = a;
    for (int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

// FUNGSI REKURSIF
int pangkatRekursif(int a, int b)
{
    if (b <= 1)
    {
        return a;
    }
    else
    {
        return a * pangkatRekursif(a, (b - 1));
    }
}

int main()
{
    int a, b;
    cout << "Masukkan angka : ";
    cin >> a;
    cout << "Masukkan pangkat : ";
    cin >> b;

    cout << "hasil pangkat iterasi  : " << pangkatIterasi(a, b) << endl;
    cout << "hasil pangkat rekursif : " << pangkatRekursif(a, b) << endl;

    return 0;
}