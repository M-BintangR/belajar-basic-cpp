#include <iostream>

using namespace std;

// FUNGSI HITUNG LUAS
double hitung_luas(double p, double l)
{
    double luas;
    luas = (p * l);
    return luas;
}

// FUNGSI HITUNG KELILING
double hitung_keliling(double p, double l)
{
    double keliling;
    keliling = 2 * (p * l);
    return keliling;
}

// FUNGSI MENAMPILKAN HASIL
void tampilkan_hasil(double keliling, double luas)
{
    cout << "=============== MENAMPILKAN HASIL ================" << endl;
    cout << "hasil luas adalah     : " << luas << endl;
    cout << "hasil keliling adalah : " << keliling << endl;
}

int main()
{
    double p, l;

    cout << "Masukkan panjang : ";
    cin >> p;
    cout << "Masukkan lebar   : ";
    cin >> l;

    double keliling = hitung_keliling(p, l);
    double luas = hitung_luas(p, l);

    tampilkan_hasil(keliling, luas);

    return 0;
}