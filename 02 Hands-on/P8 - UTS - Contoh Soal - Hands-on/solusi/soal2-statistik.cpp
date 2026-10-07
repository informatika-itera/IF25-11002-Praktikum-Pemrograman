#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t, hari = 0, total = 0, panas = 0, maks = 0, min = 0;
    cin >> t;
    while (t != 999) {
        if (hari == 0) { maks = t; min = t; }
        hari++;
        total += t;
        if (t > 32) panas++;
        if (t > maks) maks = t;
        if (t < min) min = t;
        cin >> t;
    }
    cout << "Hari      : " << hari << endl;
    cout << fixed << setprecision(2) << "Rata-rata : " << (double) total / hari << endl;
    cout << "Hari panas: " << panas << endl;
    cout << "Selisih   : " << maks - min << endl;
    return 0;
}
