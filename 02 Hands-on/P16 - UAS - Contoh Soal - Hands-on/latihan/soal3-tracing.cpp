// Contoh Soal UAS 3 (Bagian B, 25 poin): Tracing Fungsi dan Rekursi
//
// Tanpa menjalankan program, tulis isi array sesudah proses(a, 5) dan
// gambar pohon pemanggilan r(4). Lalu tulis keluaran program.
// File ini sudah lulus cek.sh; gunakan untuk memeriksa jawaban sesudahnya.

#include <iostream>
using namespace std;

void proses(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t + 1;
    }
}

int r(int n) {
    if (n <= 1) return 1;
    return r(n - 1) + 2 * r(n - 2);
}

int main() {
    int a[5] = {3, 8, 1, 6, 4};
    proses(a, 5);
    for (int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl << r(4) << endl;
    return 0;
}
