#include <iostream>

using namespace std;

int main()
{
    cout << "perulangan break : " << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // jika sudah sampai 5 maka perulagan akan di hentikan
        }
        cout << "perulangan yang ke : " << i << endl;
    }

    cout << "perulangan continue : " << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue; // akan mengabaikan perulangan saat ini dan melanjutkan perulagan berikutnya
        }

        cout << i << " adalah bilangan ganjil" << endl;
    }

    return 0;
}