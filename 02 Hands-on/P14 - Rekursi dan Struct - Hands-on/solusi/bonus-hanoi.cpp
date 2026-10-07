#include <iostream>
using namespace std;

int langkah = 0;

void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 0) return;
    hanoi(n - 1, asal, bantu, tujuan);
    cout << "Pindah cakram " << n << " dari " << asal << " ke " << tujuan << endl;
    langkah++;
    hanoi(n - 1, bantu, tujuan, asal);
}

int main() {
    hanoi(3, 'A', 'C', 'B');
    cout << "Total langkah: " << langkah << endl;
    return 0;
}
