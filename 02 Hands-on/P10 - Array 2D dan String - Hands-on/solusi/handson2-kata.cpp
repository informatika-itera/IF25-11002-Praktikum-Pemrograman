#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int vokal = 0, kata = 1;
    string kapital = s;
    for (int i = 0; i < (int) s.length(); i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') vokal++;
        if (s[i] == ' ') kata++;
        kapital[i] = toupper(s[i]);
    }
    cout << "Panjang : " << s.length() << endl;
    cout << "Vokal   : " << vokal << endl;
    cout << "Kata    : " << kata << endl;
    cout << "Kapital : " << kapital << endl;
    return 0;
}
