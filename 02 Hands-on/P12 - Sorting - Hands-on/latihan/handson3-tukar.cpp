// Hands-on 3 (Tantangan): Perbaiki Bubble Sort
// Sub-CPMK 12.2, CPMK0608
//
// Program seharusnya mengurutkan {5, 1, 4, 2, 8, 3} menjadi 1 2 3 4 5 8.
// Ada tiga kesalahan. Tuliskan isi array sesudah setiap pertukaran pada
// putaran pertama, perbaiki, lalu isi PENJELASAN.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    int a[N] = {5, 1, 4, 2, 8, 3};
    for (int i = 0; i < N - 3; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                a[j] = a[j + 1];
                a[j + 1] = a[j];
            }
        }
    }
    for (int k = 0; k < N; k++) cout << a[k] << " ";
    cout << endl;
    return 0;
}
