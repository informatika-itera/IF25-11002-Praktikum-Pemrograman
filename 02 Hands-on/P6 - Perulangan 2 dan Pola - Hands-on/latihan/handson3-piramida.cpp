// Hands-on 3 (Tantangan): Perbaiki Piramida
// Sub-CPMK 6.2, CPMK0608
//
// Piramida tinggi n (uji: 4) seharusnya seperti expected/handson3-piramida.txt:
// baris b berisi (n - b) spasi lalu (2b - 1) bintang.
// Program ini punya tiga kesalahan pada batas perulangan.
// Tulis tabel: b | banyak spasi | banyak bintang, untuk versi salah dan
// versi benar. Perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int b = 1; b < n; b++) {
        for (int s = 0; s <= n - b; s++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * b; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
