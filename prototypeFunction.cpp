#include <iostream>

using namespace std;

int tambah(int x, int y); // prototype fungsi
void tampilkan(int hasil);

int main()
{
    int x, y;

    x = 10;
    y = 10;

    tampilkan(tambah(x, y));

    return 0;
}

int tambah(int x, int y)
{
    return x + y;
}

void tampilkan(int hasil)
{
    cout << "hasil adalah : " << hasil;
}