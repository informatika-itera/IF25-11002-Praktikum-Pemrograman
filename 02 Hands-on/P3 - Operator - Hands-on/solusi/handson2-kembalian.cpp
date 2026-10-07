#include <iostream>
using namespace std;

int main() {
    int bayar, belanja;
    cin >> bayar >> belanja;
    int sisa = bayar - belanja;
    cout << "Kembalian: " << sisa << endl;

    cout << "50000 x " << sisa / 50000 << endl;
    sisa %= 50000;
    cout << "20000 x " << sisa / 20000 << endl;
    sisa %= 20000;
    cout << "10000 x " << sisa / 10000 << endl;
    sisa %= 10000;
    cout << "5000 x " << sisa / 5000 << endl;
    sisa %= 5000;
    cout << "2000 x " << sisa / 2000 << endl;
    sisa %= 2000;
    cout << "1000 x " << sisa / 1000 << endl;
    return 0;
}
