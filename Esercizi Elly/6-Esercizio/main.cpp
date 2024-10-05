#include <iostream>
using namespace std;

int main () {
    float totale, prezzo, sconto;
    cout << "Inserisci il prezzo: ";
    cin >> prezzo;
    cout << "Inserisci lo sconto da applicare: ";
    cin >> sconto;
    totale = (prezzo) - ((prezzo * sconto) / 100);
    cout << "Cartellino: " << endl << "Prezzo: " << prezzo << " euro" << endl << "Sconto applicato: " << sconto  << "%" << endl << "Prezzo finale: " << totale << " euro";
    return 0;
}