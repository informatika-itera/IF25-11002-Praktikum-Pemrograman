#include <iostream>
using namespace std;

int main() {
    int a[100];
    for (int i = 0; i < 100; i++) a[i] = 2 * i + 1;
    int uji[4] = {1, 99, 199, 200};
    for (int k = 0; k < 4; k++) {
        int x = uji[k], lin = 0, bin = 0;
        for (int i = 0; i < 100; i++) {
            lin++;
            if (a[i] == x) break;
        }
        int low = 0, high = 99;
        while (low <= high) {
            int mid = (low + high) / 2;
            bin++;
            if (a[mid] == x) break;
            if (a[mid] < x) low = mid + 1;
            else high = mid - 1;
        }
        cout << x << ": linear " << lin << ", binary " << bin << endl;
    }
    return 0;
}
