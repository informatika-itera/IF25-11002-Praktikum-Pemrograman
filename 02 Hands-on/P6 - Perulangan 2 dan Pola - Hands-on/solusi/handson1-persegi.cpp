#include <iostream>
using namespace std;

int main() {
    int t, l;
    cin >> t >> l;
    for (int b = 1; b <= t; b++) {
        for (int k = 1; k <= l; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
