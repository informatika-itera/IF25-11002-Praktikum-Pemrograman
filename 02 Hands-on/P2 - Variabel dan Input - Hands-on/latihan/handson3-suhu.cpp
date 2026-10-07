// Hands-on 3 (Tantangan): Perbaiki Konversi Suhu
// Sub-CPMK 2.2, CPMK0608
//
// Program ini mengubah suhu Celsius ke Fahrenheit dan Kelvin dengan rumus
//   F = C * 9 / 5 + 32      K = C + 273.15
// Program bisa dikompilasi, tetapi hasilnya SALAH. Ada tiga kesalahan logika.
// Masukan uji: 36.6. Keluaran yang benar ada di expected/handson3-suhu.txt.
//
// Tugasmu:
//   1. Telusuri nilai setiap variabel dengan masukan 36.6 (tulis di kertas).
//   2. Perbaiki tiga kesalahan sampai keluarannya cocok.
//   3. Isi blok PENJELASAN: baris, apa yang salah, dan mengapa.
//
// PENJELASAN
// Kesalahan 1: baris ..., ...
// Kesalahan 2: baris ..., ...
// Kesalahan 3: baris ..., ...

#include <iostream>
using namespace std;

int main() {
    int celsius;
    cout << "Suhu (C): ";
    cin >> celsius;

    double fahrenheit = celsius * (9 / 5) + 32;
    int kelvin = celsius + 273.15;

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin    : " << kelvin << endl;
    return 0;
}
