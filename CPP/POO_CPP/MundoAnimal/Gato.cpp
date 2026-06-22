#include <iostream>
#include "Animal.h"
#include "Gato.h"

using namespace std;

Gato::Gato(string nome): Animal(nome) {
  Gato::ct++;
}

Gato::~Gato() {
}

void Gato::som() {
  cout << "Miauuuuuuuuuu!! Miauuuuuuuuu!!" << endl;
}

string Gato::toString() {
  return "Gato{" + getNome() + '}';
}
