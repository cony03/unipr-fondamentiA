// if statement
#include <iostream>
using namespace std;

int main() {
    int voto;
    cout << "Inserisci il voto che hai preso all'esame: ";
    cin >> voto;

    // if (voto >= 18)
    //     cout << "Hai passato l'esame! :)" <<endl;
    // else
    //     cout << "Non hai passato l'esame! :(" <<endl;

    // o 

        if (voto >= 18) {
            cout << "Hai passato l'esame! :)" <<endl;
            voto++;
            cout << voto << endl;
        } else {
            cout << "Non hai passato l'esame! :(" <<endl;
            ++voto;
            cout << voto << endl;
        }
    
    cout << "Addio";

    return 0;
}