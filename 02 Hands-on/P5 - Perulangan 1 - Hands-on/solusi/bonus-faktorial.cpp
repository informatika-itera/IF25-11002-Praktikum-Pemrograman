#include <iostream>
using namespace std;

int main() {
    int pilihan;
    do {
        cin >> pilihan;
        if (pilihan == 1 || pilihan == 2) {
            int n;
            cin >> n;
            long long hasil = (pilihan == 1) ? 1 : 0;
            for (int i = 1; i <= n; i++) {
                if (pilihan == 1) hasil *= i;
                else hasil += i;
            }
            cout << (pilihan == 1 ? "Faktorial " : "Jumlah ") << n << " = " << hasil << endl;
        }
    } while (pilihan != 0);
    cout << "Selesai" << endl;
    return 0;
}
