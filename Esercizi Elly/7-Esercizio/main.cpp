#include <iostream>
using namespace std;

int main() {
    int anno;
    cout << "Calcolo dell'eta', inserisci il tuo anno di nascita: ";
    cin >> anno;
    
    int nascita = 2024 - anno;

    cout << "Hai " << nascita << " anni!";
    
    return 0;
}