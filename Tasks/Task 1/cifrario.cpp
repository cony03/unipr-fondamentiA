#include <iostream>
using namespace std;
// ascii a = 97
// ascii z = 122
int main() {
    char _uno, _due, _tre;
    cout << "Inserire tre caratteri:" <<endl;
    cin >> _uno >> _due >> _tre;
    if (_uno >= 97 && _uno <= 122)  
        if (_uno >= 110) _uno -= 13; else _uno += 13; 
    else _uno = 63;
    if (_due >= 97 && _due <= 122)  
        if (_due >= 110) _due -= 13; else _due += 13; 
    else _due = 63;
    if (_tre >= 97 && _tre <= 122) 
        if (_tre >= 110) _tre -= 13; else _tre += 13; 
    else _tre = 63;
    cout << "ROT 13 : " << _uno << " " << _due << " " << _tre;
    return 0;
}