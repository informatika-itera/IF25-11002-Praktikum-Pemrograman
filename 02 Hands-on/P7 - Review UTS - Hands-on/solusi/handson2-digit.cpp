#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int banyak = 0, jumlah = 0, terbesar = 0, balik = 0;
    while (n > 0) {
        int d = n % 10;
        banyak++;
        jumlah += d;
        if (d > terbesar) terbesar = d;
        balik = balik * 10 + d;
        n /= 10;
    }
    cout << "Banyak digit : " << banyak << endl;
    cout << "Jumlah digit : " << jumlah << endl;
    cout << "Digit terbesar: " << terbesar << endl;
    cout << "Dibalik      : " << balik << endl;
    return 0;
}
