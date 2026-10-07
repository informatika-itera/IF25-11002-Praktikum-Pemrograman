#include <iostream>
using namespace std;

int main() {
    int n[3][4];
    for (int b = 0; b < 3; b++)
        for (int k = 0; k < 4; k++)
            cin >> n[b][k];
    for (int b = 0; b < 3; b++) {
        int total = 0;
        for (int k = 0; k < 4; k++) {
            cout << n[b][k] << " ";
            total += n[b][k];
        }
        cout << "| " << total << endl;
    }
    return 0;
}
