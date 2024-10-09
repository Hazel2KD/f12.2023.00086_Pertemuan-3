#include <iostream>
using namespace std;

int max (int n) {
    if (n % 3 == 0) {
        cout << n << " Kelipatan 3." << endl;
    } else {
        cout << n << " BUkan kelipatan 3." << endl;
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
