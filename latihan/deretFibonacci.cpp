#include <iostream>

using namespace std;

int main()
{
    // f_n = f_n + f_n2;

    int n, fn_1, fn_2, fn_3;

    cout << "============== PROGRAM DERET FIBONACCI ================" << endl;

    cout << "Masukkan nilai ke n : ";
    cin >> n;

    fn_2 = 1;
    fn_3 = 0;

    fn_1 = fn_2 + fn_3;
    cout << fn_1 << endl;

    for (int i = 1; i < n; i++)
    {
        fn_1 = fn_2 + fn_3;
        fn_3 = fn_2;
        fn_2 = fn_1;

        cout << fn_1 << endl;
    }

    cout << "\n";

    return 0;
}