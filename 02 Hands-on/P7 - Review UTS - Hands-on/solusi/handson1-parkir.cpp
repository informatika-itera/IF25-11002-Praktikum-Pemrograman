#include <iostream>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        char jenis;
        int menit;
        cin >> jenis >> menit;
        int jam = menit / 60 + (menit % 60 > 0 ? 1 : 0);
        if (jenis == 'M') {
            cout << jam << " jam, tarif " << 2000 + (jam - 1) * 1000 << endl;
        } else if (jenis == 'B') {
            cout << jam << " jam, tarif " << 5000 + (jam - 1) * 3000 << endl;
        } else {
            cout << "Jenis tidak dikenal" << endl;
        }
    }
    return 0;
}
