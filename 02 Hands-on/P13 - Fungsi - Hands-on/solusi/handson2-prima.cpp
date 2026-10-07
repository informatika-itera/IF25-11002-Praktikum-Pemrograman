#include <iostream>
using namespace std;

bool isPrima(int x);
int hitungPrima(int a[], int n);

int main() {
    int n, a[50];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cout << a[i] << (isPrima(a[i]) ? " prima" : " bukan") << endl;
    }
    cout << "Banyak prima: " << hitungPrima(a, n) << endl;
    return 0;
}

bool isPrima(int x) {
    if (x < 2) return false;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0) return false;
    }
    return true;
}

int hitungPrima(int a[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (isPrima(a[i])) c++;
    }
    return c;
}
