#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double rata = (a + b + c) / 3.0;
    cout << fixed << setprecision(2) << "Rata-rata: " << rata << endl;
    return 0;
}
