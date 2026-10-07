#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int jumlah = 0;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        jumlah += i;
    }
    cout << endl;
    cout << "Jumlah: " << jumlah << endl;
    return 0;
}
