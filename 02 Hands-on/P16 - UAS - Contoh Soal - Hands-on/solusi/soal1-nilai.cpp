#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double rataRata(int nilai[][3], int baris) {
    int t = 0;
    for (int k = 0; k < 3; k++) t += nilai[baris][k];
    return t / 3.0;
}

char huruf(double r) {
    if (r >= 75) return 'A';
    if (r >= 65) return 'B';
    if (r >= 50) return 'C';
    if (r >= 40) return 'D';
    return 'E';
}

int main() {
    int n, nilai[30][3];
    string nama[30];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nama[i];
        for (int k = 0; k < 3; k++) cin >> nilai[i][k];
    }
    int iTerbaik = 0;
    cout << fixed << setprecision(1);
    for (int i = 0; i < n; i++) {
        double r = rataRata(nilai, i);
        cout << nama[i] << " " << r << " " << huruf(r) << endl;
        if (r > rataRata(nilai, iTerbaik)) iTerbaik = i;
    }
    cout << "Tertinggi: " << nama[iTerbaik] << endl;
    return 0;
}
