// PENJELASAN (contoh jawaban)
// Kesalahan 1: transpos membaca m[k][b], bukan m[b][k]; baris dan kolom ditukar.
// Kesalahan 2: endl harus di dalam perulangan luar agar setiap baris
//   transpos tampil di baris sendiri.
// Kesalahan 3: m[i][2 - i] adalah diagonal samping; diagonal utama m[i][i].
//   Penambahan m[1][1] di akhir juga harus dihapus.
#include <iostream>
using namespace std;

int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int b = 0; b < 3; b++) {
        for (int k = 0; k < 3; k++) {
            cout << m[k][b] << " ";
        }
        cout << endl;
    }
    int diag = 0;
    for (int i = 0; i < 3; i++) {
        diag += m[i][i];
    }
    cout << "Diagonal: " << diag << endl;
    return 0;
}
