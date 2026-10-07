// PENJELASAN (contoh jawaban)
// Kesalahan 1: maks diperbarui sesudah cin membaca nilai berikutnya, sehingga
//   nilai pertama (95) tidak pernah dibandingkan. Pindahkan sebelum cin.
// Kesalahan 2: maks diawali 0; bila semua nilai negatif hasilnya salah.
//   Lebih aman mengawali maks dengan nilai pertama.
// Kesalahan 3: total / banyak pembagian bulat (330 / 4 = 82).
#include <iostream>
using namespace std;

int main() {
    int nilai, banyak = 0, total = 0;
    cin >> nilai;
    int maks = nilai;
    while (nilai != -1) {
        banyak++;
        total += nilai;
        if (nilai > maks) {
            maks = nilai;
        }
        cin >> nilai;
    }
    cout << "Banyak    : " << banyak << endl;
    cout << "Tertinggi : " << maks << endl;
    cout << "Rata-rata : " << (double) total / banyak << endl;
    return 0;
}
