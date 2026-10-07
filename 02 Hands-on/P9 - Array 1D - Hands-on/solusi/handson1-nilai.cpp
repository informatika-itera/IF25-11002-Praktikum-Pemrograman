#include <iostream>
using namespace std;

int main() {
    int n;
    int nilai[50];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "nilai[" << i << "] = " << nilai[i] << endl;
    }
    cout << "Terbalik:";
    for (int i = n - 1; i >= 0; i--) {
        cout << " " << nilai[i];
    }
    cout << endl;
    return 0;
}
