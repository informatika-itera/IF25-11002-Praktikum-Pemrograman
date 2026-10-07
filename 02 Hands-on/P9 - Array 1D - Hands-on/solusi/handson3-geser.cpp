// PENJELASAN (contoh jawaban)
// Kesalahan 1: a[N] di luar batas; indeks terakhir adalah N - 1.
// Kesalahan 2: menggeser dari depan menimpa nilai sebelum sempat dipindah,
//   sehingga semua elemen menjadi 10. Geser dari belakang: i dari N - 1 ke 1,
//   a[i] = a[i - 1].
// Kesalahan 3: elemen yang disimpan harus masuk ke a[0], bukan a[1].
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int a[N] = {10, 20, 30, 40, 50};
    int simpan = a[N - 1];
    for (int i = N - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = simpan;
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
