#include <iostream>
using namespace std;

int max (int n) {
    if (n % 2 == 0) {
        cout << n << " adalah bilangan genap." << endl;
    } else {
        cout << n << " adalah bilangan ganjil." << endl;
    }
    return 0;
}

int main() {
    int bilangan;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    int bilangan1=max(bilangan);

    return 0;
}
