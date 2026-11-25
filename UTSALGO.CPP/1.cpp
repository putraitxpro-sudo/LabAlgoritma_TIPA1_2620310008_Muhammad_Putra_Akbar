#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Input bilangan 1: ";
    cin >> a;

    cout << "Input bilangan 2: ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "setelah pertukaran" << endl;
    cout << "bilangan 1 " << a << endl;
    cout << "bilangan 2 " << b << endl;

    return 0;
}