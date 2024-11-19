#include <iostream>
using namespace std;

int main() {
    int op;

    do {
        do {
            cout << "Che operazione vuoi fare?" << endl;
            cout << "0 - Addizione" << endl;
            cout << "1 - Sottrazione" << endl;
            cout << "2 - Moltiplicazione" << endl;
            cout << "3 - Divisione" << endl;
            cout << "-1 - Esci" << endl;
            cin >> op;
        } while (op < -1 || op > 3);

        if (op == -1) break;

        int a, b;
        cout << "Inserire due valori: ";
        cin >> a >> b;

        if (op == 0) {
            cout << "Addizione: " << a + b << endl; 
        } else if (op == 1) {
            cout << "Sottrazione: " << a - b << endl; 
        } else if (op == 2) {
            cout << "Moltiplicazione: " << a * b << endl; 
        } else {
            if (b == 0) {
                cout << "Errore: divisione per zero!" << endl;
            } else {
                cout << "Divisione: " << (a * float(b)) << endl; 
            }
        }
    } while (true);

    return 0;
}