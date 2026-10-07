// PENJELASAN (contoh jawaban)
// Kesalahan 1: b < n hanya menghasilkan n - 1 baris; seharusnya b <= n.
// Kesalahan 2: s mulai dari 0 sampai n - b, jadi spasinya n - b + 1,
//   kelebihan satu di setiap baris. Mulai s dari 1.
// Kesalahan 3: k <= 2 * b menghasilkan 2, 4, 6 bintang (genap);
//   piramida butuh 2b - 1 bintang (1, 3, 5, 7).
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int b = 1; b <= n; b++) {
        for (int s = 1; s <= n - b; s++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * b - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
