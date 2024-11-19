#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Inserisci i valori dell'equazione di primo grado (a e b): ";
    cin >> a >> b;
    float risultato = 0; 
    risultato = b / a;
    if (a != 0) 
        cout << "Il valore di e' | x =  " << b / -a;
    else 
        cout << "L'equazione non ha soluzioni, e' impossibile.";
        
    return 0;
}