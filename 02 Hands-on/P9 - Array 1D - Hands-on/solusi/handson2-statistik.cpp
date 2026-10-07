#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int total = 0, iMaks = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
        if (a[i] > a[iMaks]) iMaks = i;
    }
    double rata = (double) total / n;
    int diAtas = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > rata) diAtas++;
    }
    cout << fixed << setprecision(2);
    cout << "Rata-rata   : " << rata << endl;
    cout << "Tertinggi   : " << a[iMaks] << " (indeks " << iMaks << ")" << endl;
    cout << "Di atas rata: " << diAtas << endl;
    return 0;
}
