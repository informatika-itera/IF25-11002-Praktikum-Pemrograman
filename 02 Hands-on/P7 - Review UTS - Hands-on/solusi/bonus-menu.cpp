#include <iostream>
using namespace std;

int main() {
    int saldo = 500000, pilih;
    do {
        cin >> pilih;
        if (pilih == 1) {
            cout << "Saldo: " << saldo << endl;
        } else if (pilih == 2) {
            int x;
            cin >> x;
            saldo += x;
            cout << "Setor " << x << " berhasil" << endl;
        } else if (pilih == 3) {
            int x;
            cin >> x;
            if (x % 50000 != 0) {
                cout << "Harus kelipatan 50000" << endl;
            } else if (x > saldo) {
                cout << "Saldo tidak cukup" << endl;
            } else {
                saldo -= x;
                cout << "Tarik " << x << " berhasil" << endl;
            }
        }
    } while (pilih != 0);
    cout << "Terima kasih" << endl;
    return 0;
}
