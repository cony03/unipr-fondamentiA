#include <iostream>
#include <cstring>
using namespace std;

/*
Scrivere un programma in C++ che legge ripetutamente da input due parole a e b (lunghe massimo 100 caratteri
ciascuna, non contenenti spazi o caratteri a capo) e stampa a video un messaggio che indica se le due parole
sono anagrammi oppure se le due parole non hanno lettere in comune. Il programma continua l’esecuzione
finché non viene immessa la stringa “$” come prima parola.

Esempio d’esecuzione
Inserire la prima parola: dormire
Inserire la seconda parola: rimedro
La due parole sono anagrammi

Inserire la prima parola: ciao
Inserire la seconda parola: ciae

Inserire la prima parola: cake
Inserire la seconda parola: homm
La due parole non hanno lettere in comune

Inserire la prima parola: ciao
Inserire la seconda parola: cia

Inserire la prima parola: $
Addio!

tiziano 
notizia

t -> n
i -> o
z -> t
i -> i
a -> z
n -> i
o -> a

*/
#define MAX_ARRAY 101

int main() {
    char parolaA[MAX_ARRAY];
    char parolaB[MAX_ARRAY];
    char tempA, tempB;
    bool anagramma = false;
    int comune = 0;
    bool reset = false;

    while(true) {
        cout << "Inserire la prima parola: ";
        cin.getline(parolaA, MAX_ARRAY);
        if (strcmp(parolaA, "$") == 0) {
            cout << "Addio!";
            break;
        }
        cout << "Inserire la seconda parola: ";
        cin.getline(parolaB, MAX_ARRAY);

        for(int i = 0; i < strlen(parolaA) - 1; i++) {
            for(int k = 0; k < strlen(parolaA) - 1; k++) {
                if (parolaA[k] > parolaA[k + 1]) {
                    tempA = parolaA[k];
                    parolaA[k] = parolaA[k + 1];
                    parolaA[k + 1] = tempA;   
                }
            }
        }

        for(int i = 0; i < strlen(parolaB) - 1; i++) {
            for(int k = 0; k < strlen(parolaB) - 1; k++) {
                if (parolaB[k] > parolaB[k + 1]) {
                    tempB = parolaB[k];
                    parolaB[k] = parolaB[k + 1];
                    parolaB[k + 1] = tempB;   
                }
            }
        }

        for(int i = 0; i < strlen(parolaA); i++) {
            for(int k = 0; k < strlen(parolaB); k++) {
                if(parolaA[i] != parolaB[k]) {
                    anagramma = false;
                } else {
                    anagramma = true;
                }
            }
        }

        for(int i = 0; i < strlen(parolaA); i++) {
            for(int k = 0; k < strlen(parolaB); k++) {
                if(parolaA[i] != parolaB[k]) {
                    comune++;
                }
            }
        }
        
        if (strlen(parolaA) != strlen(parolaB)) {
            cout << "Le parole non possono essere anagrammi!" << endl;
            anagramma = false;
            reset = true;
        }

        if (anagramma) {
            cout << "Le due parole sono anagrammi!" << endl;
            reset = true;
        }

        if (((strlen(parolaA) + strlen(parolaB)) * 2) == comune) {
            cout << "Le due parole non hanno lettere in comune!" << endl;
            reset = true;
        }

        if (reset) {
            comune = 0;
        }
    }

    return 0;
}