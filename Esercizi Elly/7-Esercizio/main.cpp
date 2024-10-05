#include <iostream>
using namespace std;

int main() {
    int anno;
    cout << "Calcolo dell'eta', inserisci il tuo anno di nascita: ";
    cin >> anno;
    
    int anni = 2024 - anno;

    cout << "Hai " << anni << " anni!";
    
    return 0;
}