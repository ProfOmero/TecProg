#include <iostream>
#include "Cachorro.h"

using namespace std;

Cachorro::Cachorro(string nome): Animal(nome) {
  Cachorro::ct++;
}

Cachorro::~Cachorro() {
}

void Cachorro::som() {
  cout << "Au!! Au!! Au!! Au!!" << endl;
}

void Cachorro::rosnar() {
 cout << "Grrrrrrrrr!!" << endl;
}

string Cachorro::toString() {
  return "Cachorro{" + getNome() + '}';
}
