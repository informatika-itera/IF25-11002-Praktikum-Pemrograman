#include <iostream>
using namespace std;

int minimum(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) if (a[i] < m) m = a[i];
    return m;
}

int maksimum(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) if (a[i] > m) m = a[i];
    return m;
}

double rataRata(int a[], int n) {
    int t = 0;
    for (int i = 0; i < n; i++) t += a[i];
    return (double) t / n;
}

void urutkan(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Minimum : " << minimum(a, n) << endl;
    cout << "Maksimum: " << maksimum(a, n) << endl;
    cout << "Rata    : " << rataRata(a, n) << endl;
    urutkan(a, n);
    cout << "Terurut :";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << endl;
    return 0;
}
