#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, risultato = 0;
    cout << "Inserisci due numeri interi: ";
    cin >> a >> b;

    // Algoritmo di Euclide per calcolare l'MCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "MCD: " << a << endl;

    return 0;
}