#include <iostream>
using namespace std;

int main() {
    float r, t, luas, volume;
    const float phi = 3.14;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    cout << "Masukkan tinggi tabung: ";
    cin >> t;

    luas = phi * r * r;
    volume = phi * r * r * t;

    cout << "\nLuas Lingkaran = " << luas << endl;
    cout << "Volume Tabung = " << volume << endl;

    return 0;
}