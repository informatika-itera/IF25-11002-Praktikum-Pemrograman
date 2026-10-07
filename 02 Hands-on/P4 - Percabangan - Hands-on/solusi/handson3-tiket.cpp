// PENJELASAN (contoh jawaban)
// Kesalahan 1: hari == 6 || 7 selalu benar karena 7 dianggap true.
//   Setiap perbandingan harus lengkap: hari == 6 || hari == 7.
// Kesalahan 2: pelajar = 1 adalah penugasan, bukan perbandingan, dan selalu
//   benar (g++ memberi peringatan). Selain itu potongan hanya di hari biasa.
// Kesalahan 3: syarat gratis terbalik; seharusnya umur < 5.
#include <iostream>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        int hari, umur, pelajar;
        cin >> hari >> umur >> pelajar;
        bool akhirPekan = (hari == 6 || hari == 7);
        int harga;
        if (akhirPekan) {
            harga = 50000;
        } else {
            harga = 35000;
        }
        if (pelajar == 1 && !akhirPekan) {
            harga -= 10000;
        }
        if (umur < 5) {
            harga = 0;
        }
        cout << "Harga: " << harga << endl;
    }
    return 0;
}
