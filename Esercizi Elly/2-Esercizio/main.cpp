#include <iostream>
using namespace std;
// Problema: dato un carattere minuscolo in input, stampare a video il corrispondente carattere maiuscolo
// dalla tabella ascii sappiamo che 65 = a minuscola e 97 = A maiuscola 
int main() {
    char x, y;
    cout << "Inserisci un carattere minuscolo" <<endl;
    cin >> x;
    y = x - 32; // tabella ascii la differenza tra 97 e 65 è 32
    cout << "Il tuo carattere e' " << y <<endl;
    return 0;
}
