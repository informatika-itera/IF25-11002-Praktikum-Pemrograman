#include <iostream>
using namespace std;

int main() {
    int n, frek[5] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int k = x / 20;
        if (k > 4) k = 4;
        frek[k]++;
    }
    string label[5] = {" 0-19 ", "20-39 ", "40-59 ", "60-79 ", "80-100"};
    for (int k = 0; k < 5; k++) {
        cout << label[k] << " | ";
        for (int j = 0; j < frek[k]; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
