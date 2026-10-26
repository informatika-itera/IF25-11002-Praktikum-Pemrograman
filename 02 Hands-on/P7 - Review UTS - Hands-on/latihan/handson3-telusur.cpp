// Simulasi 3 (gaya soal B UTS): Telusuri lalu Buktikan
// Sub-CPMK 7.2, CPMK0608
//
// JANGAN jalankan dulu. Di kertas, buat trace table untuk variabel
// i, j, s, dan c, lalu tulis keluaran yang kalian perkirakan di bawah.
// Sesudah itu jalankan, bandingkan, dan jelaskan selisihnya bila ada.
// Latihan ini lulus cek.sh tanpa diubah; yang dinilai adalah tracing kalian.
//
// PERKIRAAN KELUARAN:
// ...
// PENJELASAN (urutan perubahan s dan c):
// ...

#include <iostream>
using namespace std;

int main() {
    int s = 0, c = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 3 == 0) {
                continue;
            }
            s += i * j;
            c++;
        }
        if (s > 15) {
            break;
        }
    }
    cout << s << " " << c << endl;
    return 0;
}
