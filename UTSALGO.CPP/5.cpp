#include <iostream>
using namespace std;

int main() {
    int a, i, j, k, l;

    cout << "Input nilai untuk belah ketupat: ";
    cin >> a;
    cout << endl;

    // 1. Segitiga atas
    for (i=0; i<=a; i++) {
        for (j=0; j<=a-i; j++) { // Kiri atas
            cout << "* ";
        }

        for (k=0; k<=a-j; k++) { // Hollow Part
            cout << "   ";
        }

        for (l=0; l<=a-i; l++) { // Kanan atas
            cout << "* ";
        }

        cout << endl;
    }

    // 2. Segitiga bawah
    for (i=a; i>=0; i--) {
        for (j=0; j<=a-i; j++) { // Kiri bawah
            cout << "* ";
        }

        for (k=0; k<=a-j; k++) { // Hollow Part
            cout << "   ";
        }

        for (l=0; l<=a-i; l++) { // Kanan bawah
            cout << "* ";
        }

        if (i != a+1) {
            cout << endl;
        }
    }

    return 0;
}