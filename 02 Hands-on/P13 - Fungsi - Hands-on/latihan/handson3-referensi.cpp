// Hands-on 3 (Tantangan): Perbaiki Fungsi
// Sub-CPMK 13.2, CPMK0608
//
// Program memakai tiga fungsi: tukar dua nilai, menghitung rata-rata array,
// dan membatasi nilai ke rentang 0-100. Keluaran yang benar:
//   Sesudah tukar: 9 4
//   Rata-rata: 77.5
//   Dibatasi: 0 100 65
// Ada tiga kesalahan (satu memunculkan peringatan). Telusuri nilai parameter
// dan variabel di setiap pemanggilan, perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

void tukar(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

double rataRata(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return total / n;
}

int batasi(int nilai) {
    if (nilai < 0) return 0;
    if (nilai > 100) return 100;
}

int main() {
    int p = 4, q = 9;
    tukar(p, q);
    cout << "Sesudah tukar: " << p << " " << q << endl;
    int data[4] = {70, 85, 60, 95};
    cout << "Rata-rata: " << rataRata(data, 4) << endl;
    cout << "Dibatasi: " << batasi(-5) << " " << batasi(120) << " " << batasi(65) << endl;
    return 0;
}
