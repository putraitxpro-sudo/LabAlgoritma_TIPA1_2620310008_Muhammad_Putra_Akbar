#include<iostream>
using namespace std;

int main(){
    int x, bil = 0;
    cout << "Masukkan bilangan pembatas akhir : ";
    cin >> x;
    
    do {
        bil += 4;
        if (bil >= x)
            break;
        cout << bil << " ";
    } while(true);
    
    cout << endl;
    getchar();
    return 0;
}