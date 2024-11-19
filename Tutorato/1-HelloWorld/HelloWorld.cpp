#include <iostream>
using namespace std;

int main() {
    int i = 0, j = 0;
while (i < 2) {
   j = 0;
   while (j < 5) {
      if (j == 2)
            break;
      cout << i << "_" << j << endl;
      j++;
   }
   i++;
}
    return 0;
}