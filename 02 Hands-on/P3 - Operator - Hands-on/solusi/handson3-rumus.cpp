// PENJELASAN (contoh jawaban)
// Kesalahan 1: / dan * setingkat dan dikerjakan dari kiri, jadi berat / tinggi
//   lalu dikali tinggi lagi, hasilnya kembali 55. Perlu kurung pada penyebut.
// Kesalahan 2: / lebih dulu daripada +, jadi hanya c yang dibagi 3.
// Kesalahan 3: 22 / 7 pembagian bulat bernilai 3, bukan 3.142857.
#include <iostream>
using namespace std;

int main() {
    double berat, tinggi;
    int a, b, c, r;
    cin >> berat >> tinggi >> a >> b >> c >> r;

    double bmi = berat / (tinggi * tinggi);
    double rata = (a + b + c) / 3.0;
    double luas = 22.0 / 7 * r * r;

    cout << "BMI      : " << bmi << endl;
    cout << "Rata-rata: " << rata << endl;
    cout << "Luas     : " << luas << endl;
    return 0;
}
