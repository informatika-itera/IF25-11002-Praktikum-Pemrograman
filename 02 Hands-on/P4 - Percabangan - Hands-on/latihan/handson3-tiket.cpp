// Hands-on 3 (Tantangan): Perbaiki Harga Tiket Bioskop
// Sub-CPMK 4.2, CPMK0608
//
// Aturan harga: hari biasa Rp35000, akhir pekan (hari 6 atau 7) Rp50000.
// Pelajar mendapat potongan Rp10000, tetapi hanya di hari biasa.
// Anak di bawah 5 tahun gratis di semua hari.
// Masukan uji: "hari umur pelajar(1/0)" untuk tiga pembeli:
//   3 20 1    -> 25000
//   6 20 1    -> 50000
//   7 4 0     -> 0
// Program ini punya tiga kesalahan (satu menimbulkan peringatan).
// Perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        int hari, umur, pelajar;
        cin >> hari >> umur >> pelajar;
        int harga;
        if (hari == 6 || 7) {
            harga = 50000;
        } else {
            harga = 35000;
        }
        if (pelajar = 1) {
            harga -= 10000;
        }
        if (umur > 5) {
            harga = 0;
        }
        cout << "Harga: " << harga << endl;
    }
    return 0;
}
