#include <iostream>
using namespace std;

#define MAX_NUM 1000

int main() {
    int* A[MAX_NUM];
    int dim = 0;
    int allocati = 0;
    int valoreDaInserire;

    while (true) {
        cout << "Inserire un numero: ";
        cin >> valoreDaInserire;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Errore, solo numeri!" << endl;
        }

        if (valoreDaInserire < 0) break;

        bool trovato = false;
        for (int i = 0; i < allocati; i++) {
            if (*A[i] == valoreDaInserire) {
                A[dim++] = A[i];
                trovato = true;
                break;
            }
        }

        if (!trovato) {
            A[dim++] = new int(valoreDaInserire);
            allocati++;
        }
    }

    cout << "Allocate " << allocati - 1 << " variabili." << endl;
    for (int i = 0; i < dim; ++i) {
        cout << *A[i] << " ";
    }
    for (int i = 0; i < allocati; ++i) {
        delete A[i];
    }
    return 0;
}