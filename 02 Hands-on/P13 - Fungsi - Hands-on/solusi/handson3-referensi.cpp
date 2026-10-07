// PENJELASAN (contoh jawaban)
// Kesalahan 1: tukar menerima salinan (pass by value), jadi p dan q di main
//   tidak berubah. Gunakan referensi: void tukar(int &x, int &y).
// Kesalahan 2: total / n pembagian bulat (310 / 4 = 77). Ubah ke (double) total / n.
// Kesalahan 3: batasi tidak mengembalikan nilai bila 0 <= nilai <= 100
//   (g++: control reaches end of non-void function). Tambahkan return nilai;
#include <iostream>
using namespace std;

void tukar(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

double rataRata(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return (double) total / n;
}

int batasi(int nilai) {
    if (nilai < 0) return 0;
    if (nilai > 100) return 100;
    return nilai;
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
