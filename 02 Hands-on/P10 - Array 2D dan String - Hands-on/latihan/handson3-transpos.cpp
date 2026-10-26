// Hands-on 3 (Tantangan): Perbaiki Transpos dan Diagonal
// Sub-CPMK 10.2, CPMK0608
//
// Untuk matriks 3x3, program seharusnya menampilkan transposnya lalu jumlah
// diagonal utama. Untuk {{1,2,3},{4,5,6},{7,8,9}}: transpos 1 4 7 / 2 5 8 /
// 3 6 9, diagonal 15. Ada tiga kesalahan. Tulis indeks [b][k] yang dibaca
// pada setiap langkah, perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int b = 0; b < 3; b++) {
        for (int k = 0; k < 3; k++) {
            cout << m[b][k] << " ";
        }
    }
    cout << endl;
    int diag = 0;
    for (int i = 0; i < 3; i++) {
        diag += m[i][2 - i];
    }
    cout << "Diagonal: " << diag + m[1][1] << endl;
    return 0;
}
