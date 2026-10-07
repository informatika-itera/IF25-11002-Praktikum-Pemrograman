#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << boolalpha;
    cout << "genap      : " << (n % 2 == 0) << endl;
    cout << "kelipatan 5: " << (n % 5 == 0) << endl;
    cout << "dua digit  : " << (n >= 10 && n <= 99) << endl;
    return 0;
}
