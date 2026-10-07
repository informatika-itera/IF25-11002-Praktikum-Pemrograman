#include <iostream>
using namespace std;

bool simetris(int m[][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (m[i][j] != m[j][i]) return false;
    return true;
}

int main() {
    for (int kasus = 0; kasus < 2; kasus++) {
        int n, m[10][10];
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> m[i][j];
        cout << (simetris(m, n) ? "simetris" : "tidak simetris") << ";";
        for (int i = 0; i < n; i++) {
            int t = 0;
            for (int j = 0; j < n; j++) t += m[i][j];
            cout << " " << t;
        }
        cout << endl;
    }
    return 0;
}
