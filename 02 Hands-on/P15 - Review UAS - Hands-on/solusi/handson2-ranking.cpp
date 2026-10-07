#include <iostream>
#include <string>
using namespace std;

struct Peserta {
    string nama;
    int nilai;
};

void urutkan(Peserta p[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int iMaks = i;
        for (int j = i + 1; j < n; j++)
            if (p[j].nilai > p[iMaks].nilai) iMaks = j;
        swap(p[i], p[iMaks]);
    }
}

int main() {
    int n;
    Peserta p[50];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i].nama >> p[i].nilai;
    urutkan(p, n);
    for (int i = 0; i < n; i++) cout << i + 1 << ". " << p[i].nama << " " << p[i].nilai << endl;
    string cari;
    cin >> cari;
    int posisi = -1;
    for (int i = 0; i < n; i++) {
        if (p[i].nama == cari) { posisi = i; break; }
    }
    if (posisi == -1) cout << cari << " tidak terdaftar" << endl;
    else cout << cari << " peringkat " << posisi + 1 << endl;
    return 0;
}
