
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string kalimat = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";

    for (int i = 0; i < kalimat.length(); i++) {
        kalimat[i] = tolower(kalimat[i]);
    }

    reverse(kalimat.begin(), kalimat.end());

    cout << "Hasil: " << kalimat << endl;

    return 0;
}