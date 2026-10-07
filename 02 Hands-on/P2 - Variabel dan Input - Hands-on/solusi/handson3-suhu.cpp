// PENJELASAN (contoh jawaban)
// Kesalahan 1: celsius bertipe int, sehingga masukan 36.6 terpotong menjadi 36.
//   Suhu bisa pecahan, jadi tipenya harus double.
// Kesalahan 2: (9 / 5) adalah pembagian bilangan bulat, hasilnya 1, bukan 1.8.
//   Tulis 9.0 / 5 atau celsius * 9 / 5 dengan celsius bertipe double.
// Kesalahan 3: kelvin bertipe int, sehingga 309.75 terpotong menjadi 309.
#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Suhu (C): ";
    cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5 + 32;
    double kelvin = celsius + 273.15;

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin    : " << kelvin << endl;
    return 0;
}
