// KUNCI (a) dan (b)
// 1. tambahStok menerima salinan struct (pass by value), sehingga stok asli
//    tidak berubah. Gunakan referensi: void tambahStok(Barang &b, int x).
// 2. i <= n pada terbanyak membaca b[3], di luar array. Seharusnya i < n.
// 3. Baris terakhir menampilkan .stok, padahal yang diminta namanya (.nama).
#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string nama;
    int stok;
};

void tambahStok(Barang &b, int x) {
    b.stok += x;
}

int terbanyak(Barang b[], int n) {
    int iMaks = 0;
    for (int i = 1; i < n; i++)
        if (b[i].stok > b[iMaks].stok) iMaks = i;
    return iMaks;
}

int main() {
    Barang b[3] = {{"Pena", 20}, {"Buku", 12}, {"Map", 4}};
    for (int i = 0; i < 3; i++) tambahStok(b[i], 5);
    cout << b[0].nama << " " << b[0].stok << ", " << b[1].nama << " " << b[1].stok
         << ", " << b[2].nama << " " << b[2].stok << endl;
    cout << "Terbanyak: " << b[terbanyak(b, 3)].nama << endl;
    return 0;
}
