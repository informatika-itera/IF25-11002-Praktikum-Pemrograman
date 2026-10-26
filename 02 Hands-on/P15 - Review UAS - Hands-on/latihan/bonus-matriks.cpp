// Bonus (Pengayaan): Matriks Simetris
// Sub-CPMK 15.1, CPMK0607
//
// Baca n lalu matriks n x n. Dengan fungsi bool simetris(int m[][10], int n)
// tentukan apakah matriks simetris (m[i][j] == m[j][i]), lalu tampilkan
// jumlah setiap baris. Masukan uji: dua matriks 3 x 3 di input/bonus-matriks.txt.

#include <iostream>
using namespace std;

int main() {
    for (int kasus = 0; kasus < 2; kasus++) {
        int n, m[10][10];
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> m[i][j];
        // TODO
    }
    return 0;
}
