#include <iostream>
using namespace std;

int main() {
    int v;
    cout << "Inserisci il voto che hai preso: ";
    cin >> v;

    if (v > 27)
        cout << "Ottimo!!"; 
    else if (v <= 27 && v > 24)
        cout << "Buono";
    else if (v <= 24 && v >= 18)
        cout << "Sufficiente";
    else if (v <= 17 && v > 10)
        cout << "Insufficiente";
    else if (v >= 10 && v >= 0)
        cout << "Gravemente insufficiente..";
    
    return 0;
}