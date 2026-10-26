// Hands-on 2 (Menengah): Pecahan Uang Kembalian
// Sub-CPMK 3.1, CPMK0607
//
// Baca uang yang dibayar dan total belanja. Hitung kembalian, lalu pecah
// menjadi lembar 50000, 20000, 10000, 5000, 2000, dan 1000 sesedikit mungkin.
// Masukan uji: 100000 63000. Lihat expected/handson2-kembalian.txt.
// Petunjuk: jumlah lembar = sisa / nilai lembar; sisa %= nilai lembar.

#include <iostream>
using namespace std;

int main() {
    int bayar, belanja;
    cin >> bayar >> belanja;
    int sisa = bayar - belanja;
    cout << "Kembalian: " << sisa << endl;

    cout << "50000 x " << sisa / 50000 << endl;
    sisa %= 50000;
    // TODO: lanjutkan untuk 20000, 10000, 5000, 2000, dan 1000

    return 0;
}
