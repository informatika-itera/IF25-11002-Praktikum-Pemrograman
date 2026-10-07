#include <iostream>
#include <string>
using namespace std;

int main() {
    int data[3][6] = {{1, 2, 3, 4, 5, 6}, {6, 5, 4, 3, 2, 1}, {3, 6, 1, 5, 2, 4}};
    string nama[3] = {"terurut", "terbalik", "acak"};
    for (int d = 0; d < 3; d++) {
        int banding = 0, tukar = 0;
        for (int i = 0; i < 5; i++) {
            bool ada = false;
            for (int j = 0; j < 5 - i; j++) {
                banding++;
                if (data[d][j] > data[d][j + 1]) {
                    int t = data[d][j]; data[d][j] = data[d][j + 1]; data[d][j + 1] = t;
                    tukar++;
                    ada = true;
                }
            }
            if (!ada) break;
        }
        cout << nama[d] << ": perbandingan " << banding << ", tukar " << tukar << endl;
    }
    return 0;
}
