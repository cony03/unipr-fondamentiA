#include <iostream>
using namespace std;
/*
Si scriva un programma in C++ che chiede all'utente un numero; se il numero è pari, 
si calcoli il quadrato di quel numero, altrimenti si calcoli il cubo. Infine, si stampi
il risultato a schermo 
*/
int main() {
    int x;
    cout << "Inserire un numero: " <<endl;
    cin >> x;
    int operazione = (x % 2 == 0 ? (x * x) : (x * x * x));
    cout << "Risultato : " << operazione;
    return 0;
}