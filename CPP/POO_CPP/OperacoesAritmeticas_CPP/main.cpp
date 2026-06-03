#include <iostream>
#include "MeuMath.h"

int main() {
  MeuMath *meusDados = new MeuMath(0, 0);

  meusDados->entrada();
  std::cout << std::endl << meusDados->toString();
}
