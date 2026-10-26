// Hands-on 2 (Menengah): Struk Kantin
// Sub-CPMK 2.1, CPMK0607
//
// Program membaca tiga masukan: nama barang (satu kata), harga satuan,
// dan jumlah. Lalu menampilkan struk seperti expected/handson2-kantin.txt.
// Masukan uji ada di input/handson2-kantin.txt:  Nasi 12000 3
//
// Catatan: saat dicek dengan cek.sh, masukan dibaca dari file, jadi teks
// yang kalian ketik tidak ikut tampil di keluaran.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string barang;
    int harga, jumlah;

    cout << "Barang: ";
    cin >> barang;
    // TODO 1: tampilkan "Harga: " lalu baca harga
    // TODO 2: tampilkan "Jumlah: " lalu baca jumlah

    // TODO 3: hitung total = harga * jumlah

    cout << endl << "=== STRUK KANTIN ===" << endl;
    // TODO 4: tampilkan tiga baris struk: barang, "harga x jumlah", dan total
    //   Nasi
    //   12000 x 3
    //   Total: 36000

    return 0;
}
