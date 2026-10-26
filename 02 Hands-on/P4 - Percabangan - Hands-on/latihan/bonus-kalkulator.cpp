// Bonus (Pengayaan): Kalkulator dengan switch
// Sub-CPMK 4.1, CPMK0607
//
// Baca "a operator b", misalnya 12 / 5. Operator: + - * / %
// Pakai switch pada operator (char). Pembagian ditampilkan pecahan.
// Pembagian atau sisa bagi dengan nol tampilkan "Tidak bisa dibagi nol".
// Operator lain tampilkan "Operator tidak dikenal".
// Masukan uji berisi tiga baris: 12 / 5, 7 % 0, 3 ^ 2

#include <iostream>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        int a, b;
        char op;
        cin >> a >> op >> b;
        // TODO: switch (op) { case '+': ... }
    }
    return 0;
}
