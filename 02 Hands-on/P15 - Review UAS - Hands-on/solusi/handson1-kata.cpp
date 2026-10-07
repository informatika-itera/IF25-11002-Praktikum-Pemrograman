#include <iostream>
#include <string>
using namespace std;

int indeksTerpanjang(string k[], int n) {
    int iMaks = 0;
    for (int i = 1; i < n; i++)
        if (k[i].length() > k[iMaks].length()) iMaks = i;
    return iMaks;
}

int main() {
    int n;
    string k[50];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> k[i];
    int t = indeksTerpanjang(k, n);
    cout << "Terpanjang: " << k[t] << " (" << k[t].length() << " huruf)" << endl;
    cout << "Diawali vokal:";
    for (int i = 0; i < n; i++) {
        char c = k[i][0];
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') cout << " " << k[i];
    }
    cout << endl;
    return 0;
}
