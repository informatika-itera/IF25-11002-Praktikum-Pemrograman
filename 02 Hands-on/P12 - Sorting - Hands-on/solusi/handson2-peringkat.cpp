#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, skor[50];
    string nama[50];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nama[i] >> skor[i];
    for (int i = 0; i < n - 1; i++) {
        int iMaks = i;
        for (int j = i + 1; j < n; j++) {
            if (skor[j] > skor[iMaks]) iMaks = j;
        }
        int ts = skor[i]; skor[i] = skor[iMaks]; skor[iMaks] = ts;
        string tn = nama[i]; nama[i] = nama[iMaks]; nama[iMaks] = tn;
    }
    for (int i = 0; i < n; i++) cout << i + 1 << ". " << nama[i] << " " << skor[i] << endl;
    return 0;
}
