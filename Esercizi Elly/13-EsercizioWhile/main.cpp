#include <iostream>
//#include <cmath> // seno coseno tangente potenze ecc .. guardare documentazione per funzioni
using namespace std;

int main() {
    // int counter = 0;
    // while (counter < 10) {
    //     cout << counter << endl;
    //     counter++; // stampa 10 volte da 0 a 9 contando partendo da zero
    // }
    // int n = 0;

    //     cout << "Quante volte vuoi stampare **?" << endl;
    //     cin >> n;

    // while (n < 0) {
    //     cout << "Hai sbagliato [!!] Quante volte vuoi stampare **?" << endl;
    //     cin >> n;
    // }
    
    // int counter = 0;
    // while (counter < n) {
    //     cout << "**" << endl;
    //     counter++;
    // }
    int n = -1;

    while (n < 0) {
            cout << "Inserisci intero :";
        cin >> n;
    }

    int i = 0;
    int j = 0;
    // valerio è finocchio
    while (i < n) {
        j = 0;
        while(j < i + 1) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }



    return 0;
}