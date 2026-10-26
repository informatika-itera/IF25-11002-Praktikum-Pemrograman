// Hands-on 1 (Dasar): Bubble Sort dengan Jejak
// Sub-CPMK 12.1, CPMK0607
//
// Baca n lalu n bilangan. Urutkan naik dengan bubble sort, dan tampilkan
// isi array sesudah SETIAP putaran (pass) luar.
// Masukan uji: 5  29 10 14 37 13. Lihat expected/handson1-bubble.txt.

#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    // TODO: for luar i = 0 .. n-2, for dalam j = 0 .. n-2-i,
    //       tukar bila a[j] > a[j+1], lalu tampilkan "Putaran i+1: ..."

    return 0;
}
