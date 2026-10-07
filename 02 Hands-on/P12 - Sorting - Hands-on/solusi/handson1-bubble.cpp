#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        cout << "Putaran " << i + 1 << ":";
        for (int k = 0; k < n; k++) cout << " " << a[k];
        cout << endl;
    }
    return 0;
}
