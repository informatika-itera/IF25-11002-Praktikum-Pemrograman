#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int b = 1; b <= n; b++) {
        for (int k = 1; k <= b; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    for (int b = n; b >= 1; b--) {
        for (int k = 1; k <= b; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
