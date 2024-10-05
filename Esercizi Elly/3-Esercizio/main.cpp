#include <iostream>
using namespace std;
/*
 usando l'espressione condizionale
 Probema: dato in input un numero intero, stampare a video il suo valore assoluto.
*/
int main() {
    int x;
    cout << "Immetti un numero intero:" <<endl;
    cin >> x;
    int abs = (x > 0 ? x : x * -1); // questa espressione cosa fa? intanto valuta se x > 0 (poi se x è maggiore di 0 allora stampa x, sennò va a moltiplicare x per -1)
    cout << "Il valore assoluto e' " << abs; 
    return 0;
}