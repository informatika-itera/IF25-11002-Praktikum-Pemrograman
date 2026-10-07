#include <iostream>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        int a, b;
        char op;
        cin >> a >> op >> b;
        switch (op) {
            case '+': cout << a + b << endl; break;
            case '-': cout << a - b << endl; break;
            case '*': cout << a * b << endl; break;
            case '/':
                if (b == 0) cout << "Tidak bisa dibagi nol" << endl;
                else cout << (double) a / b << endl;
                break;
            case '%':
                if (b == 0) cout << "Tidak bisa dibagi nol" << endl;
                else cout << a % b << endl;
                break;
            default: cout << "Operator tidak dikenal" << endl;
        }
    }
    return 0;
}
