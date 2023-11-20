#include <iostream>

using namespace std;

int main()
{
    // VARIABLE
    int hasil;
    int a = 3;
    int b = 2;

    // OPERATOR LOGIKA (not, and, or)

    // OPERATOR NOT
    hasil = !(a == 3);

    cout << hasil << endl;

    // OPERATOR AND
    // and : apabila kedua nya true akan menghasilkan true, jika salahsatunya false maka akan menghasilkan false
    cout << "OPERATOR AND : " << endl;
    hasil = (a == 3) && (b == 2);
    cout << hasil << endl; // true and true hasil true
    hasil = (a == 4) && (b == 2);
    cout << hasil << endl; // false and true hasil false
    hasil = (a == 3) && (b == 3);
    cout << hasil << endl; // true and false hasil false
    hasil = (a == 4) && (b == 3);
    cout << hasil << endl; // false and false hasil false

    // OPERATOR OR
    // or : apabila salah satu true maka menghasilkan true
    cout << "OPERATOR OR : " << endl;
    hasil = (a == 3) || (b == 2);
    cout << hasil << endl; // true and true hasil true
    hasil = (a == 4) || (b == 2);
    cout << hasil << endl; // false and true hasil true
    hasil = (a == 3) || (b == 3);
    cout << hasil << endl; // true and false hasil true
    hasil = (a == 4) || (b == 3);
    cout << hasil << endl; // false and false hasil false

    return 0;
}