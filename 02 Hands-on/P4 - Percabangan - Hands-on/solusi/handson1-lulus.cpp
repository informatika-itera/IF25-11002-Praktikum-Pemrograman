#include <iostream>
using namespace std;

int main() {
    int nilai;
    cin >> nilai;
    if (nilai >= 50) {
        cout << "LULUS" << endl;
    } else {
        cout << "TIDAK LULUS" << endl;
    }
    if (nilai >= 85) {
        cout << "Selamat, nilai istimewa!" << endl;
    }
    return 0;
}
