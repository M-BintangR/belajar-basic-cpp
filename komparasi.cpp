#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    bool hasil1, hasil2;

    // komparasi relation expression

    // sebanding ===
    hasil1 = a == b;
    cout << hasil1 << endl;
    // tidak sebanding ===
    hasil2 = a != b;
    cout << hasil2 << endl;

    return 0;
}