#include <iostream>
#include <cmath>

using namespace std;

/*
    LIBRARY

    www.cppreference.com

    1. ceil(x) => pembulatan ke atas
    2. cos(x)  => cosinus
    3. exp(x)  => exponen
    4. fabs(x) => nilai absolute dalam float
    5. floor(x) => pembulatan ke bawah
    6. fmod(x) => modulus dalam float
    7. log(x) => logaritma dengan basis natural
    8. log10(x) => logaritma dengan basis 10
    9. pow(x,y) => x pangkat y
    10. sin(x) => sinus
    11. sqrt => akar kuadrat
    12. tan(x) => tanges
    13. rand() => mencari angka random
*/

int main()
{
    int x;
    cout << "meghitung akar dari x: ";
    cin >> x;

    double y = sqrt(x);

    cout << "hasil akar pangkat 2 : " << ceil(y) << endl;

    return 0;
}