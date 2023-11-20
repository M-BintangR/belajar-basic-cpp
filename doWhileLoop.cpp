#include <iostream>

using namespace std;

int main()
{
    // VARIABEL
    int a = 10;

    // DO WHILE LOOP
    do
    {
        // PERULANGAN MINIMAL SEKALI (WALAU AKSI SALAH)
        cout << "perulangan yang ke : " << a << endl;
        a++;

    } while (a <= 5);

    return 0;
}