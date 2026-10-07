#include <iostream>
#include <string>
using namespace std;

struct Alat {
    string kode;
    string nama;
    int jumlah;
};

void urutkan(Alat a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j].kode > a[j + 1].kode) swap(a[j], a[j + 1]);
}

int cari(Alat a[], int n, string k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid].kode == k) return mid;
        if (a[mid].kode < k) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int total(Alat a[], int n) {
    if (n == 0) return 0;
    return a[n - 1].jumlah + total(a, n - 1);
}

int main() {
    int n;
    Alat a[50];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i].kode >> a[i].nama >> a[i].jumlah;
    urutkan(a, n);
    for (int i = 0; i < n; i++) cout << a[i].kode << " " << a[i].nama << " " << a[i].jumlah << endl;
    for (int q = 0; q < 3; q++) {
        string k;
        cin >> k;
        int p = cari(a, n, k);
        if (p == -1) cout << k << ": tidak ada" << endl;
        else cout << k << ": " << a[p].nama << " " << a[p].jumlah << endl;
    }
    cout << "Total alat: " << total(a, n) << endl;
    return 0;
}
