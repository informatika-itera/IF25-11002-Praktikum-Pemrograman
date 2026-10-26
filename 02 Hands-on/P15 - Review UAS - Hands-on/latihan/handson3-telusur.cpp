// Simulasi 3 (gaya soal B UAS): Telusuri Rekursi dan Array
// Sub-CPMK 15.2, CPMK0608
//
// JANGAN jalankan dulu. Gambar pohon pemanggilan g(a, 0, 4) dan tulis isi
// array sesudah fungsi ubah. Tulis perkiraan keluaran di bawah, baru jalankan.
// File ini sudah lulus cek.sh tanpa diubah; yang dinilai adalah tracing kalian.
//
// PERKIRAAN KELUARAN:
// ...

#include <iostream>
using namespace std;

int g(int a[], int kiri, int kanan) {
    if (kiri > kanan) return 0;
    int tengah = (kiri + kanan) / 2;
    return a[tengah] + g(a, kiri, tengah - 1);
}

void ubah(int a[], int n) {
    for (int i = 1; i < n; i++) a[i] += a[i - 1];
}

int main() {
    int a[5] = {4, 1, 3, 2, 5};
    cout << g(a, 0, 4) << endl;
    ubah(a, 5);
    for (int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl << g(a, 0, 4) << endl;
    return 0;
}
