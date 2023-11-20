#include <iostream>

using namespace std;

// OVERLOADING = MENIMPA
int luas_kotak(int p, int l)
{
    return p * l;
}

int luas_kotak(int p)
{
    return p * p;
}

double luas_kotak(double p, double l)
{
    return p * l;
}

int main()
{
    cout << "luas kotak pertama : " << luas_kotak(10, 10) << endl;
    cout << "luas kotak kedua   : " << luas_kotak(10) << endl;
    cout << "luas kotak ketiga  : " << luas_kotak(1.3) << endl;

    return 0;
}