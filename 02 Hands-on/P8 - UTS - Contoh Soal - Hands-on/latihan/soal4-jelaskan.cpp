// Contoh Soal UTS 4 (Bagian B, 25 poin): Temukan dan Jelaskan
//
// Program menghitung rata-rata nilai kuis yang lulus (nilai >= 60) dari
// lima nilai. Masukan uji: 80 55 70 60 45  -> rata-rata lulus 70.
// (a) Sebutkan tiga kesalahan beserta nomor barisnya.
// (b) Jelaskan akibat setiap kesalahan terhadap keluaran.
// (c) Tulis versi yang benar.
//
// JAWABAN (a) dan (b):
// ...

#include <iostream>
using namespace std;

int main() {
    int nilai, lulus = 0, total;
    for (int i = 1; i < 5; i++) {
        cin >> nilai;
        if (nilai > 60) {
            total += nilai;
            lulus++;
        }
    }
    cout << "Rata-rata lulus: " << total / lulus << endl;
    return 0;
}
