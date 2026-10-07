#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string nama[50], kunci;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nama[i];
    cin >> kunci;
    int banyak = 0;
    cout << "Posisi:";
    for (int i = 0; i < n; i++) {
        if (nama[i] == kunci) {
            cout << " " << i + 1;
            banyak++;
        }
    }
    cout << endl;
    if (banyak == 0) cout << "Tidak ada" << endl;
    else cout << kunci << " muncul " << banyak << " kali" << endl;
    return 0;
}
