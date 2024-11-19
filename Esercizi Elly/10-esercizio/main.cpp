#include <iostream>
using namespace std;

/*
Dati in input tre valori interi, stampa il massimo
*/

int main() {
    int a, b, c;
    cout << "Inserisci i tre valori: " << endl;
    cin >> a >> b >> c;
    cout << endl;
    
    if (a >= b && a >= c) 
        cout << a << endl;
    else if (b >= a && b >= c)
        cout << b << endl;
    else
        cout << c << endl;

    return 0;
}