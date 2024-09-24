#include <iostream> // #include è una direttiva per il pre-processore (che è integrato nel compilatore) 
                    //per includere le funzioni contenute nel file specificato (iostream) (libreria)
using namespace std; // da mettere sempre 

int main() { // int main(): indica l'inizio el programma principale, il cui contenuto è compreso fra le due parentesi g raffe
    int x, y, z; // dichiarazione di variabile: definizione di tre nuove variabili, chiamate x, y e z di tipo intero. cioè possono contenere solo valori interi (-2, 5, 1001, ma non 5.3)
    cout << "Inserisci 3 numeri interi" <<endl;
    cin >> x >> y >> z;
    float m;
    m = (x + y + z) / 3.0;
    cout << "LA media e " << m << endl;
    return 0;
}