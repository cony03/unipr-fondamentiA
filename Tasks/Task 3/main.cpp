#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    do {
        cout << "Inserisci un valore intero dispari (> 0): ";
        cin >> n;
        if (n <= 0 || n % 2 == 0) {
            cout << "Input errato." << endl;
        }
    } while (n % 2 == 0 || n < 0);

    for(int i = 1; i <= n; i++) {
        for(int k = 1; k <= n; k++) {
            tmp = i * k;
            cout << tmp << " ";
        }
        cout << endl;
    }
    
    return 0;
}


