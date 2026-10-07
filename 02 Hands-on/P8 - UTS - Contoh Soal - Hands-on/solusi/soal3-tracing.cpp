// Contoh Soal UTS 3 (Bagian B, 25 poin): Tracing
//
// Tanpa menjalankan program, buat trace table untuk x, y, dan i, lalu
// tuliskan keluarannya. Poin diberikan untuk setiap baris trace yang benar.
// File ini sudah lulus cek.sh; gunakan untuk memeriksa jawaban kalian sesudahnya.

#include <iostream>
using namespace std;

int main() {
    int x = 2, y = 20;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            x *= i;
        } else {
            y -= x;
        }
        if (y < x) {
            break;
        }
        cout << i << ": " << x << " " << y << endl;
    }
    cout << "akhir " << x << " " << y << endl;
    return 0;
}
