#include <iostream>
using namespace std;

int main() {
    int saldo, setoran, target;
    cin >> saldo >> setoran >> target;
    int bulan = 0;
    while (saldo < target) {
        bulan++;
        saldo += setoran;
        cout << "Bulan " << bulan << ": " << saldo << endl;
    }
    cout << "Target tercapai dalam " << bulan << " bulan" << endl;
    return 0;
}
