#include <iostream>

using namespace std;

int tambah(int a, int b)
{
    int y;
    y = a + b;
    return y;
}

int kuadrat(int x)
{
    return x * x;
}

int main()
{
    int input, hasil, a, b, hasil2;

    cout << "nilai kuadrat dari : ";
    cin >> input;

    cout << "nilai pertama : ";
    cin >> a;
    cout << "nilai kedua : ";
    cin >> b;

    hasil2 = tambah(a, b);

    hasil = kuadrat(input);

    cout << "kuadrat inputan adalah : " << hasil << endl;
    cout << "nilai a + b adalah : " << hasil << endl;

    return 0;
}