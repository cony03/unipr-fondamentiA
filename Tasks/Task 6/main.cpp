#include <iostream>
#include <cstring>
using namespace std;

#define MAX_CONTATTI 100

struct contatti {
    char nome[50];
    char cognome[50];
    char numero[15];
};

int main() {
    int op;
    int failed;
    int num_contatti = 0;
    contatti Rubrica[MAX_CONTATTI];
    do {
        cout << "*** Rubrica *** ";
        cout << endl;
        cout << "   1 - Visualizza rubrica" << endl;
        cout << "   2 - Inserisci contatto" << endl;
        cout << "   3 - Cancella contatto" << endl;
        cout << "   4 - Esci" << endl;
        cin >> op;
        cin.ignore();

        if(op == 1) {
            if (num_contatti == 0) {
                cout << "Rubrica vuota!" << endl;
                op = 5;
            } else {
                for (int i = 0; i < num_contatti; i++) {
                    cout << Rubrica[i].nome << " " << Rubrica[i].cognome << " " << Rubrica[i].numero <<endl;
                }
                op = 5;
            }
        } else if (op == 2) {
            contatti e;
            // deve chiedere il nome fino quando la stringa non è giusta
            if(num_contatti > MAX_CONTATTI) {
                cout << "Rubrica piena!";
                continue;
            }

            do {
                cout << "Inserisci il nome del contatto da inserire: ";
                cin.getline(e.nome, 50);
                failed = cin.fail();
                if (failed) {
                    cin.clear();
                    cin.ignore(5000, '\n');
                }
                for (int i = 0; e.nome[i] != '\0'; i++) { // 65 90, 97 122
                    if (!((e.nome[i] >= 65 && e.nome[i] <= 90) || (e.nome[i] >= 97 && e.nome[i] <= 122))) {
                        failed = true;
                    }
                }
                if (failed) {
                    cout << "Nome non valido reinseriscilo!" << endl;
                    failed = true;
                }
            } while(failed);

            do {
                cout << "Inserisci il cognome del contatto da inserire: ";
                cin.getline(e.cognome, 50);
                failed = cin.fail();
                for (int i = 0; e.cognome[i] != '\0'; i++) { // 65 90, 97 122
                    if (!((e.cognome[i] >= 65 && e.cognome[i] <= 90) || (e.cognome[i] >= 97 && e.cognome[i] <= 122))) {
                        failed = true;
                    }
                }
                if (failed) {
                    cout << "Cognome non valido reinseriscilo!" << endl;
                    failed = true;
                    cin.clear();
                }
            } while(failed);

            do {
                cout << "Inserisci il numero del contatto da inserire: ";
                cin.getline(e.numero, 50);
                failed = cin.fail();
                if (failed) {
                    cin.clear();
                    cin.ignore(5000, '\n');
                }
                for (int i = 0; e.numero[i] != '\0'; i++) {
                    if (e.numero[i] < '0' || e.numero[i] > '9') {
                        failed = true;
                    }
                }
                if (strlen(e.numero) != 10) {
                    failed = true;
                }
                if (failed) {
                    cout << "Numero non valido reinseriscilo!" << endl;
                    failed = true;
                }
            } while(failed);

            cout << "Contatto aggiunto!" << endl << endl;
            Rubrica[num_contatti] = e;
            num_contatti++;
            // cin.clear();
            op = 5;
        }
        else if (op == 3) {
            contatti e;
            // deve chiedere il nome fino quando la stringa non è giusta
            do {
                cout << "Inserisci il nome del contatto da cancellare: ";
                cin.getline(e.nome, 50);
                failed = cin.fail();
                if (failed) {
                    cin.clear();
                    cin.ignore(5000, '\n');
                }
            } while(failed);

            do {
                cout << "Inserisci il cognome del contatto da cancellare: ";
                cin.getline(e.cognome, 50);
                failed = cin.fail();
                if (failed) {
                    cin.clear();
                    cin.ignore(5000, '\n');
                }
            } while(failed);

            bool found = false;
            for (int i = 0; i < num_contatti; i++) {
                if (strcmp(Rubrica[i].nome, e.nome) == 0 && strcmp(Rubrica[i].cognome, e.cognome) == 0) {
                    for (int j = i; j < num_contatti - 1; j++) {
                        Rubrica[j] = Rubrica[j + 1];
                    }
                    num_contatti--;
                    found = true;
                    cout << "Contatto cancellato!" << endl;
                }
            }
            if (!found) {
                cout << "Contatto non trovato!" << endl;
            }
            op = 5;
        }
        else if (op == 4) {
            cout << "Addio!";
        }
    } while (op != 4);


    
    return 0;
}