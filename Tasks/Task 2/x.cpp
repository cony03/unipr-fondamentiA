#include <iostream>
using namespace std;

int main() {
    int n;
    char _asterisco = '*';
    char _space = ' ';

    do {
        cout << "Inserisci un valore intero dispari (> 0): ";
        cin >> n;
        if (n <= 0 || n % 2 == 0) {
            cout << "Input errato." << endl;
        }
    } while (n % 2 == 0 || n < 0);


    for(int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++) {
            if (i == k || k == n - 1 - i) {
                cout << _asterisco;
            } else {
                cout << _space;
            }
            // cout << "I: " << i << "; K: " <<k;
        }
        cout << endl;
    }
    
    return 0;
}