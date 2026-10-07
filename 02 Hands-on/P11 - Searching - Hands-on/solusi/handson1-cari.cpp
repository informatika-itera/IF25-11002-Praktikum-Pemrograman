#include <iostream>
using namespace std;

int main() {
    for (int kasus = 0; kasus < 2; kasus++) {
        int n, a[100], x;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> x;
        int posisi = -1, banding = 0;
        for (int i = 0; i < n; i++) {
            banding++;
            if (a[i] == x) {
                posisi = i;
                break;
            }
        }
        if (posisi != -1) cout << x << " ditemukan di indeks " << posisi << endl;
        else cout << x << " tidak ditemukan" << endl;
        cout << "Perbandingan: " << banding << endl;
    }
    return 0;
}
