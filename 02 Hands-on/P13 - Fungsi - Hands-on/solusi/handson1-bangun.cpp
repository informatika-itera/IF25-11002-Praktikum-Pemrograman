#include <iostream>
using namespace std;

double luasPersegiPanjang(double p, double l) {
    return p * l;
}

double luasLingkaran(double r) {
    return 3.14159 * r * r;
}

void garis(int n) {
    for (int i = 0; i < n; i++) cout << "-";
    cout << endl;
}

int main() {
    garis(24);
    cout << "Persegi panjang: " << luasPersegiPanjang(8, 5) << endl;
    cout << "Lingkaran      : " << luasLingkaran(7) << endl;
    garis(24);
    return 0;
}
