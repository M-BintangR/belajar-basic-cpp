#include <iostream>

using namespace std;

double luas_volume(double p = 2, double l = 3, double t = 1);

int main()
{
    cout << "Luas Volume Adalah : " << luas_volume() << endl;

    return 0;
}

double luas_volume(double p, double l, double t)
{
    return p * l * t;
}