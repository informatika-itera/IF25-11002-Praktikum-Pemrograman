#include <iostream>
using namespace std;

int main() {
    double n;
    for (int k = 0; k < 5; k++) {
        cin >> n;
        if (n < 0 || n > 100) {
            cout << n << " -> Nilai tidak valid" << endl;
        } else if (n >= 75) {
            cout << n << " -> A" << endl;
        } else if (n >= 70) {
            cout << n << " -> AB" << endl;
        } else if (n >= 65) {
            cout << n << " -> B" << endl;
        } else if (n >= 60) {
            cout << n << " -> BC" << endl;
        } else if (n >= 50) {
            cout << n << " -> C" << endl;
        } else if (n >= 40) {
            cout << n << " -> D" << endl;
        } else {
            cout << n << " -> E" << endl;
        }
    }
    return 0;
}
