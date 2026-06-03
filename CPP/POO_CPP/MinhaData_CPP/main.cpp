#include <iostream>
#include "Data.h"

using namespace std;

int main() {
  Data *hoje = new Data();
  cout << "Hoje é dia " << hoje->toString(false) << "." << endl << endl;

  Data *esposa = new Data(3, 1, 1984);
  cout << "Esposa nasceu em " << esposa->toString(true) << "." << endl;

  return 0;
}
