// Simulasi 1 (Dasar, gaya soal A UTS): Tarif Parkir
// Sub-CPMK 7.1, CPMK0607
//
// Baca jenis kendaraan (char: 'M' motor, 'B' mobil) dan lama parkir dalam
// menit. Lama dibulatkan ke atas per jam (61 menit = 2 jam).
// Motor: Rp2000 jam pertama, Rp1000 jam berikutnya.
// Mobil: Rp5000 jam pertama, Rp3000 jam berikutnya.
// Jenis lain: "Jenis tidak dikenal".
// Masukan uji tiga baris: M 61, B 180, X 10

#include <iostream>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        char jenis;
        int menit;
        cin >> jenis >> menit;
        // TODO: hitung jam (pembulatan ke atas dengan / dan %), lalu tarif

    }
    return 0;
}
