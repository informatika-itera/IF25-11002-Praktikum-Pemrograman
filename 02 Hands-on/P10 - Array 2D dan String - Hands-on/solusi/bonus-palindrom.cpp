#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        string w;
        cin >> w;
        int n = w.length();
        bool pal = true;
        for (int i = 0; i < n / 2; i++) {
            if (tolower(w[i]) != tolower(w[n - 1 - i])) {
                pal = false;
                break;
            }
        }
        cout << w << (pal ? " palindrom" : " bukan palindrom") << endl;
    }
    return 0;
}
