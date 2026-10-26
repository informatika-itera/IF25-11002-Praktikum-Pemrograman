// Hands-on 3 (Tantangan): Perbaiki Rata-rata dengan Sentinel
// Sub-CPMK 5.2, CPMK0608
//
// Program membaca nilai satu per satu sampai bertemu -1 (sentinel), lalu
// menampilkan banyak nilai, nilai tertinggi, dan rata-ratanya.
// Masukan uji: 95 85 60 90 -1   -> Banyak 4, Tertinggi 95, Rata-rata 82.5
// Ada tiga kesalahan logika. Buat trace table (nilai, banyak, total, maks)
// untuk masukan uji, perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    int nilai, banyak = 0, total = 0, maks = 0;
    cin >> nilai;
    while (nilai != -1) {
        banyak++;
        total += nilai;
        cin >> nilai;
        if (nilai > maks) {
            maks = nilai;
        }
    }
    cout << "Banyak    : " << banyak << endl;
    cout << "Tertinggi : " << maks << endl;
    cout << "Rata-rata : " << total / banyak << endl;
    return 0;
}
