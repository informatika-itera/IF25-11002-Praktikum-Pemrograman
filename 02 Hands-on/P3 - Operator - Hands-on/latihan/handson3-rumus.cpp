// Hands-on 3 (Tantangan): Perbaiki Rumus
// Sub-CPMK 3.2, CPMK0608
//
// Program menghitung BMI, rata-rata tiga nilai, dan luas lingkaran.
// Program terkompilasi, tetapi ketiga hasilnya SALAH karena urutan operasi
// dan pembagian bulat. Masukan uji: 55 1.6 80 75 92 7
// Rumus yang benar:
//   BMI       = berat / (tinggi * tinggi)
//   rata-rata = (a + b + c) / 3
//   luas      = 22/7 * r * r   (hasil pecahan)
//
// Tugas: telusuri nilai setiap ekspresi, perbaiki, lalu isi PENJELASAN
// dengan urutan operasi yang terjadi pada versi salah.
//
// PENJELASAN
// Kesalahan 1: ...
// Kesalahan 2: ...
// Kesalahan 3: ...

#include <iostream>
using namespace std;

int main() {
    double berat, tinggi;
    int a, b, c, r;
    cin >> berat >> tinggi >> a >> b >> c >> r;

    double bmi = berat / tinggi * tinggi;
    double rata = a + b + c / 3.0;
    double luas = 22 / 7 * r * r;

    cout << "BMI      : " << bmi << endl;
    cout << "Rata-rata: " << rata << endl;
    cout << "Luas     : " << luas << endl;
    return 0;
}
