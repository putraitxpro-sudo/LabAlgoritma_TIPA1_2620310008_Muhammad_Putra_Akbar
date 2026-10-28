#include <iostream>
using namespace std;

int main() {
    double nilai1, nilai2, nilai3, rata_rata;

    cout << "Program Menghitung Nilai Rata-Rata" << endl;
    cout << "==================================" << endl;

    cout << "Masukkan Nilai Pertemuan I = ";
    cin >> nilai1;

    cout << "Masukkan Nilai Pertemuan II = ";
    cin >> nilai2;

    cout << "Masukkan Nilai Pertemuan III = ";
    cin >> nilai3;

    cout << endl;
    cout << "Hasil Input:" << endl;
    cout << "Nilai Pertemuan I = " << nilai1 << endl;
    cout << "Nilai Pertemuan II = " << nilai2 << endl;
    cout << "Nilai Pertemuan III = " << nilai3 << endl;

    rata_rata = (nilai1 + nilai2 + nilai3) / 3;

    cout << "Nilai rata-rata hasil perhitungan yang didapatkan adalah "
         << rata_rata << endl;

    cout << "Nilai yang didapat adalah Rp. 2.500.000" << endl;

    return 0;
}