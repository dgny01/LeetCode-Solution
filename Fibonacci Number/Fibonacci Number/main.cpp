#include <iostream>
using namespace std;
/* 
int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; ++i) {
        c = a + b;
     
        cout << "i: " << i << ", fibonacci: " << c << endl;  // Her adýmda fibonacci sayýsýný yazdýrýr
        a = b;
        b = c;
    }

    cout << "Fibonacci sayisi: " << c << endl;

    return 0;
}
*/

int main() {
    int n; cin >> n;
    
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }

    if (n <= 1) {
        cout << "1" << endl;
        return 0;
    }

    int a = 1, b = 2, c;
    for (int i = 2; i < n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "fibonacci is: " << c << endl;
}
