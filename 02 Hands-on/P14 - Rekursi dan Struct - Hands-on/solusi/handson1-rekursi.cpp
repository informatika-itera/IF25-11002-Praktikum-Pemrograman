#include <iostream>
using namespace std;

long long pangkat(int b, int e) {
    if (e == 0) return 1;
    return b * pangkat(b, e - 1);
}

int jumlahDigit(int n) {
    if (n < 10) return n;
    return n % 10 + jumlahDigit(n / 10);
}

int main() {
    cout << "2^10 = " << pangkat(2, 10) << endl;
    cout << "3^5 = " << pangkat(3, 5) << endl;
    cout << "digit 4096 = " << jumlahDigit(4096) << endl;
    cout << "digit 7 = " << jumlahDigit(7) << endl;
    return 0;
}
