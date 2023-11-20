#include <iostream>

using namespace std;

void hai(string name)
{
    cout << "Hai " << name << endl;
}

int main()
{
    string name;
    cout << "Masukkan nama anda : ";
    cin >> name;

    hai(name);

    return 0;
}