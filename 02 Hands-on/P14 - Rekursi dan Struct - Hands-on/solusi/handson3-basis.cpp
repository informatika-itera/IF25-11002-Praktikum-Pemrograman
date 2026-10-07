// PENJELASAN (contoh jawaban)
// Kesalahan 1: basis faktorial mengembalikan 0, sehingga semua hasil kali
//   menjadi 0. 0! = 1, jadi basisnya return 1.
// Kesalahan 2: fib(n) = fib(n - 1) + fib(n - 2), bukan fib(n - 3).
// Kesalahan 3: totalStok memakai b[n], padahal elemen terakhir dari n buku
//   ada di indeks n - 1. b[n] membaca di luar array.
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    int stok;
};

int faktorial(int n) {
    if (n == 0) return 1;
    return n * faktorial(n - 1);
}

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int totalStok(Buku b[], int n) {
    if (n == 0) return 0;
    return b[n - 1].stok + totalStok(b, n - 1);
}

int main() {
    Buku rak[3] = {{"Algoritma", 5}, {"C++ Dasar", 8}, {"Struktur Data", 10}};
    cout << "5! = " << faktorial(5) << endl;
    cout << "fib(7) = " << fib(7) << endl;
    cout << "Total stok = " << totalStok(rak, 3) << endl;
    return 0;
}
