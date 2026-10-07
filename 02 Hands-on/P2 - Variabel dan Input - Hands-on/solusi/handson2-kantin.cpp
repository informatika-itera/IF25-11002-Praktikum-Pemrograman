#include <iostream>
#include <string>
using namespace std;

int main() {
    string barang;
    int harga, jumlah;

    cout << "Barang: ";
    cin >> barang;
    cout << "Harga: ";
    cin >> harga;
    cout << "Jumlah: ";
    cin >> jumlah;

    int total = harga * jumlah;

    cout << endl << "=== STRUK KANTIN ===" << endl;
    cout << barang << endl;
    cout << harga << " x " << jumlah << endl;
    cout << "Total: " << total << endl;
    return 0;
}
