// PENJELASAN (contoh jawaban)
// Kesalahan 1: menukar tanpa variabel sementara. a[j] = a[j + 1] menimpa nilai
//   lama, sehingga kedua elemen menjadi sama dan satu nilai hilang.
// Kesalahan 2: a[j] < a[j + 1] mengurutkan turun; untuk urutan naik tukar
//   bila a[j] > a[j + 1].
// Kesalahan 3: i < N - 3 hanya menjalankan tiga putaran; butuh N - 1 putaran
//   agar data terburuk pun terurut.
#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    int a[N] = {5, 1, 4, 2, 8, 3};
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int k = 0; k < N; k++) cout << a[k] << " ";
    cout << endl;
    return 0;
}
