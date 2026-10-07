// Hands-on 3 (Tantangan): Perbaiki Rekursi dan Struct
// Sub-CPMK 14.2, CPMK0608
//
// Keluaran yang benar:
//   5! = 120
//   fib(7) = 13
//   Total stok = 23
// Ada tiga kesalahan. Gambar pohon pemanggilan faktorial(5) dan fib(4)
// (cukup panah pemanggilan dan nilai kembalinya), perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    int stok;
};

int faktorial(int n) {
    if (n == 0) return 0;
    return n * faktorial(n - 1);
}

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 3);
}

int totalStok(Buku b[], int n) {
    if (n == 0) return 0;
    return b[n].stok + totalStok(b, n - 1);
}

int main() {
    Buku rak[3] = {{"Algoritma", 5}, {"C++ Dasar", 8}, {"Struktur Data", 10}};
    cout << "5! = " << faktorial(5) << endl;
    cout << "fib(7) = " << fib(7) << endl;
    cout << "Total stok = " << totalStok(rak, 3) << endl;
    return 0;
}
