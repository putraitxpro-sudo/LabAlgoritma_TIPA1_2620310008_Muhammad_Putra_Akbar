#include <iostream>
using namespace std;

int main() {
    int n, cek = 0;

    do {
        cout << "Masukkan sebuah bilangan = ";
        cin >> n;

        if (n % 2 != 0 && n % 3 == 1) {
            cek = 1;
            cout << "Bilangan yang anda masukkan BENAR\n";
        }
        else {
            cek = 0;
            cout << "Bilangan yang anda masukkan SALAH\n";
        }

    } while (cek != 1);
}