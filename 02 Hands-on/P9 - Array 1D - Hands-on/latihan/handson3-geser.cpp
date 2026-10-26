// Hands-on 3 (Tantangan): Perbaiki Rotasi Array
// Sub-CPMK 9.2, CPMK0608
//
// Program merotasi array ke kanan satu langkah: elemen terakhir pindah ke
// depan. Untuk {10, 20, 30, 40, 50} hasilnya {50, 10, 20, 30, 40}.
// Program punya tiga kesalahan indeks. Gambar isi array sesudah setiap
// putaran (seperti trace table), perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int a[N] = {10, 20, 30, 40, 50};
    int simpan = a[N];
    for (int i = 0; i < N - 1; i++) {
        a[i + 1] = a[i];
    }
    a[1] = simpan;
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
