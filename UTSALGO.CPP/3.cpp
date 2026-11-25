#include <iostream>
using namespace std;

int main() {
    int n, x, t, i, j;

    x = 0;
    t = 1;
    n = 2;

    for(i = 1; i <= 3; i++) {
        for(j = 3; j >= i; j--) {
            t = t + n;
            n = n + x;
            x = x + 2;

            cout << t << "\t";
        }
        cout << endl;
    }

    return 0;
}