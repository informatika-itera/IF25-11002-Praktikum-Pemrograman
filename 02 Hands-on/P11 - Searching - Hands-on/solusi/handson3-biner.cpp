// PENJELASAN (contoh jawaban)
// Kesalahan 1: while (low < high) berhenti saat low == high, padahal masih
//   ada satu elemen yang belum diperiksa (misalnya 90 di indeks 9).
// Kesalahan 2: arah terbalik. Bila a[mid] < x, x ada di kanan, jadi
//   low = mid + 1; bila a[mid] > x, high = mid - 1.
// Kesalahan 3: posisi = mid + 1 memberi nomor urut, bukan indeks.
#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N] = {3, 8, 15, 21, 34, 42, 57, 66, 79, 90};
    int cari[3] = {90, 21, 50};
    for (int k = 0; k < 3; k++) {
        int x = cari[k], low = 0, high = N - 1, posisi = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                posisi = mid;
                break;
            } else if (a[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (posisi != -1) cout << x << " -> indeks " << posisi << endl;
        else cout << x << " -> tidak ditemukan" << endl;
    }
    return 0;
}
