#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    double ipk;
};

int main() {
    int n;
    cin >> n;
    Mahasiswa m[50];
    for (int i = 0; i < n; i++) cin >> m[i].nama >> m[i].nim >> m[i].ipk;
    int iTerbaik = 0, cumlaude = 0;
    for (int i = 0; i < n; i++) {
        cout << m[i].nim << "  " << m[i].nama << "  " << m[i].ipk << endl;
        if (m[i].ipk > m[iTerbaik].ipk) iTerbaik = i;
        if (m[i].ipk >= 3.5) cumlaude++;
    }
    cout << "IPK tertinggi: " << m[iTerbaik].nama << " (" << m[iTerbaik].ipk << ")" << endl;
    cout << "IPK >= 3.5   : " << cumlaude << " orang" << endl;
    return 0;
}
