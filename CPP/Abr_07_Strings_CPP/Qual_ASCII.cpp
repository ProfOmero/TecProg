#include <iostream>

using namespace std;

int main() {
  int i;

  while (true) {
    do {
       cout << "Posição, -1 para encerrar: ";
       cin >> i;
    } while ((i < -1) || (i > 255));

    if (i == -1)
        break;

    cout << i << " - " << (char)i << endl << endl;
  }

  return(0);
}
