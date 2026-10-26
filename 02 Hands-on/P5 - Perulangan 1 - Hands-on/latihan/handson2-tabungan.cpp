// Hands-on 2 (Menengah): Target Tabungan
// Sub-CPMK 5.1, CPMK0607
//
// Baca saldo awal, setoran per bulan, dan target. Setiap bulan saldo
// bertambah sebesar setoran. Dengan while, tampilkan saldo tiap bulan
// sampai saldo mencapai atau melewati target, lalu jumlah bulannya.
// Masukan uji: 100000 150000 700000. Lihat expected/handson2-tabungan.txt.

#include <iostream>
using namespace std;

int main() {
    int saldo, setoran, target;
    cin >> saldo >> setoran >> target;
    int bulan = 0;
    // TODO: while (saldo < target) { ... }
    //   setiap putaran: bulan++, saldo += setoran,
    //   tampilkan "Bulan 1: 250000" dan seterusnya

    cout << "Target tercapai dalam " << bulan << " bulan" << endl;
    return 0;
}
