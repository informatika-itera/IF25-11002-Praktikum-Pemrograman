// Contoh Soal UAS 4 (Bagian B, 25 poin): Temukan dan Jelaskan
//
// Program seharusnya menaikkan stok setiap barang sebanyak 5 lewat fungsi,
// lalu menampilkan barang dengan stok terbanyak. Keluaran benar:
//   Pena 25, Buku 17, Map 9
//   Terbanyak: Pena
// (a) Sebutkan tiga kesalahan beserta nomor barisnya.
// (b) Jelaskan akibat setiap kesalahan.
// (c) Tulis versi yang benar.
//
// JAWABAN (a) dan (b):
// ...

#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string nama;
    int stok;
};

void tambahStok(Barang b, int x) {
    b.stok += x;
}

int terbanyak(Barang b[], int n) {
    int iMaks = 0;
    for (int i = 1; i <= n; i++)
        if (b[i].stok > b[iMaks].stok) iMaks = i;
    return iMaks;
}

int main() {
    Barang b[3] = {{"Pena", 20}, {"Buku", 12}, {"Map", 4}};
    for (int i = 0; i < 3; i++) tambahStok(b[i], 5);
    cout << b[0].nama << " " << b[0].stok << ", " << b[1].nama << " " << b[1].stok
         << ", " << b[2].nama << " " << b[2].stok << endl;
    cout << "Terbanyak: " << b[terbanyak(b, 3)].stok << endl;
    return 0;
}
