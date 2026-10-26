// Hands-on 3 (Tantangan): Perbaiki Binary Search
// Sub-CPMK 11.2, CPMK0608
//
// Array sudah terurut naik: 3 8 15 21 34 42 57 66 79 90 (indeks 0-9).
// Program mencari 90, 21, dan 50. Hasil benar:
//   90 -> indeks 9, 21 -> indeks 3, 50 -> tidak ditemukan
// Ada tiga kesalahan. Buat trace table (low, high, mid, a[mid]) untuk
// pencarian 90 dan 21, perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N] = {3, 8, 15, 21, 34, 42, 57, 66, 79, 90};
    int cari[3] = {90, 21, 50};
    for (int k = 0; k < 3; k++) {
        int x = cari[k], low = 0, high = N - 1, posisi = -1;
        while (low < high) {
            int mid = (low + high) / 2;
            if (a[mid] == x) {
                posisi = mid + 1;
                break;
            } else if (a[mid] < x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (posisi != -1) cout << x << " -> indeks " << posisi << endl;
        else cout << x << " -> tidak ditemukan" << endl;
    }
    return 0;
}
