#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    // OPERATOR ASSIGMENT

    // variable = variable operator assigment
    //      a. =. a.  -   3
    // variable operator = ekspresi
    //      a. +=.   3

    a += 3;
    cout << "ditambah 3 menjadi : " << a << endl;

    a -= 3;
    cout << "dikurang 3 menjadi : " << a << endl;

    a *= 3;
    cout << "dikali 3 menjadi   : " << a << endl;

    a /= 3;
    cout << "dibagi 3 menjadi   : " << a << endl;

    a %= 3;
    cout << "modulus 3 menjadi  : " << a << endl;

    return 0;
}