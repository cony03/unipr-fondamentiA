#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char parola[101];
    char tempA;
    cout << "Inserisci una parola: ";
    cin >> parola;
    int lunghezza = strlen(parola);
    bool palindroma = true;

    for(int i = 0; i < lunghezza / 2; i++) { // si divide per due perchè nel caso di anna la prima parte
        // AN NA
        // A = A, N = N 
        //
        // cout << parola[lunghezza - i - 1] << " ";
        if (parola[i] == parola[lunghezza - i - 1]) {
            palindroma = true;
        } else {
            palindroma = false;
        }
    }
    if (palindroma) {
        cout << "Palindroma!";
    } else {
        cout << "Non palindroma!";
    }


    return 0;
}