#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;

    for (int i = 1; i <= 19; i += 2) {
        cout << i;
        jumlah += i;

        if (i < 19) {
            cout << " + ";
        }
    }

    cout << " = " << jumlah << endl;

    return 0;
}