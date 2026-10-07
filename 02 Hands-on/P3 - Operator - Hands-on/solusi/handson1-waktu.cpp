#include <iostream>
using namespace std;

int main() {
    int total;
    cin >> total;
    int jam = total / 3600;
    int menit = total % 3600 / 60;
    int detik = total % 60;
    cout << total << " detik = " << jam << " jam " << menit << " menit " << detik << " detik" << endl;
    return 0;
}
