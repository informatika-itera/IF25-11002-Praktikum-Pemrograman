#include <iostream>
using namespace std;

int main() {
    for (int k = 0; k < 3; k++) {
        int gram;
        char zona;
        cin >> gram >> zona;
        int kg = gram / 1000 + (gram % 1000 > 0 ? 1 : 0);
        if (kg < 1) kg = 1;
        int tarif;
        switch (zona) {
            case 'A': tarif = 9000; break;
            case 'B': tarif = 12000; break;
            case 'C': tarif = 15000; break;
            default: tarif = 0;
        }
        if (tarif == 0) {
            cout << "Zona tidak valid" << endl;
            continue;
        }
        double ongkos = kg * tarif;
        if (kg > 10) ongkos *= 0.9;
        cout << kg << " kg, ongkos " << ongkos << endl;
    }
    return 0;
}
