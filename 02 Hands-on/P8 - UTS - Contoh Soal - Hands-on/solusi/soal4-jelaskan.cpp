// KUNCI (a) dan (b)
// 1. total tidak diberi nilai awal, sehingga isinya acak; hasil tidak bisa ditebak.
// 2. i < 5 dari 1 hanya membaca empat nilai; nilai kelima tidak diproses.
// 3. nilai > 60 tidak menghitung nilai tepat 60 yang seharusnya lulus.
// Catatan: total / lulus pembagian bulat; aman untuk data uji ini, tetapi
// lebih baik (double) total / lulus.
#include <iostream>
using namespace std;

int main() {
    int nilai, lulus = 0, total = 0;
    for (int i = 1; i <= 5; i++) {
        cin >> nilai;
        if (nilai >= 60) {
            total += nilai;
            lulus++;
        }
    }
    cout << "Rata-rata lulus: " << (double) total / lulus << endl;
    return 0;
}
