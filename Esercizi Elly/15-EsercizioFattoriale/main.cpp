#include <iostream>
using namespace std;

int main() {
    int n, ris = 1;
    cout << "Inserisci un numero per calcolare il fattoriale: ";
    cin >> n;
    int k = n;
 
    while (k > 1) {
        ris *= k;
        k--;
    }
    cout << ris << endl;

    return 0;
}