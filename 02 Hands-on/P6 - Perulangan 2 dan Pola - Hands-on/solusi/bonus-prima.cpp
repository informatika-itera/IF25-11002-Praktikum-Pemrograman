#include <iostream>
using namespace std;

int main() {
    int n, banyak = 0;
    cin >> n;
    for (int x = 2; x <= n; x++) {
        bool prima = true;
        for (int d = 2; d * d <= x; d++) {
            if (x % d == 0) {
                prima = false;
                break;
            }
        }
        if (prima) {
            cout << x << " ";
            banyak++;
        }
    }
    cout << endl << "Banyak prima: " << banyak << endl;
    return 0;
}
