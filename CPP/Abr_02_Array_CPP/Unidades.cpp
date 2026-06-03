#include <iostream>

using namespace std;

int main() {
  string unidades[] = {"zero", "um", "dois", "três",
    "quatro", "cinco", "seis", "sete", "oito", "nove"};

  int i;

  while (true) {
    do {
       cout << "Informe uma unidade, -1 para encerrar: ";
       cin >> i;
    } while ((i < -1) || (i > 9));

    if (i == -1)
       break;

    cout << i << " = " << unidades[i] << endl << endl;
  }

  return(0);
}
