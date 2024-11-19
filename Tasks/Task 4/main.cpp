#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numBit;

    do {
        cout << "Bits: ";
        cin >> numBit;
        if (numBit <= 2) {
            cout << "Errore!" << endl;
        }
    } while (numBit <= 2);

    int arrayBit[numBit];
    int i = numBit - 1;
    do {
        cout << "Inserisci il bit nella posizione " << i << ": ";
        cin >> arrayBit[i];
        if (arrayBit[i] < 0 || arrayBit[i] > 1) {
            cout << "Errore!" <<endl;
            i++;
        }
        i--;
    } while(i >= 0);

    cout << "Operazione: " << endl << " 0 - Stampa binario:" << endl << " 1 - Converti in decimale:" << endl << " 2 - Somma:" <<endl; 
    
    int op;


    do {
        cin >> op;
        if (op != 0 && op != 1 && op != 2) {
            cout << "Errore!" << endl; 
        }
    } while (op != 0 && op != 1 && op != 2);

    switch (op) {
        case 0: 
            {
                cout << "Numero binario: ";
                for (int k = numBit - 1; k >= 0; k--) {
                    cout << arrayBit[k];
                }
                break;
            }    
        case 1:
            {
                cout << "Decimale: ";
                int conv = 0;
                for (int i = numBit - 1; i >= 0; i--) {
                    conv += arrayBit[i] * pow(2, numBit - 1 - i - 1);
                }
                if(arrayBit[numBit - 1] == 1) {
                    conv -= pow(2, numBit - 1);
                }
                cout << conv;
                break;
            }
        case 2:
            int sommabin;
            int carry = 1;

            int beforeBit = arrayBit[numBit - 1];
            // cout << "Bit: " << bitSignificativo << endl;
            for (int i = 0; i < numBit; i++) {
                sommabin = arrayBit[i] + carry;
                arrayBit[i] = sommabin % 2;  
                carry = sommabin / 2;
            }

            int afterBit = arrayBit[numBit - 1];
            // cout << "Bit dopo: << " << bitSignificativoCambio << endl;
            if (carry == 1 || beforeBit != afterBit) {
                cout << "Overflow!" << endl;
            } else {
                cout << "Somma: ";
                for (int j = numBit - 1; j >= 0; j--) {
                    cout << arrayBit[j];
                }
                cout << endl;
            }
            break;
    }
    return 0;
}