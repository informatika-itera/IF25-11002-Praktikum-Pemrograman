// Hands-on 1 (Dasar): Variabel Identitas
// Sub-CPMK 2.1, CPMK0607
//
// Simpan data berikut di variabel dengan tipe yang tepat, lalu tampilkan
// persis seperti expected/handson1-identitas.txt:
//   nama       : Rani Puspita   (string)
//   umur       : 18             (int)
//   tinggi     : 158.5          (double, dalam cm)
//   golDarah   : O              (char)
//   aktif      : true           (bool, tampil sebagai 1)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama = "Rani Puspita";
    // TODO 1: deklarasikan umur, tinggi, golDarah, dan aktif

    cout << "Nama      : " << nama << endl;
    // TODO 2: tampilkan empat baris berikutnya dengan format yang sama

    return 0;
}
