#include <iostream>
#include "Vaca.h"

using namespace std;

Vaca::Vaca(string nome): Animal(nome) {
  Vaca::ct++;
}

Vaca::~Vaca() {
}

void Vaca::som() {
  cout << "Muuuuuuuuuuuuuuuuuuuuuuuuuuuuuu!!" << endl;
}

string Vaca::toString() {
  return "Vaca{" + getNome() + '}';
}
