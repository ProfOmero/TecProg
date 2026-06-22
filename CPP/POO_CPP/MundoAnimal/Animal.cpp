#include <iostream>
#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"
#include "Vaca.h"

using namespace std;

Animal::Animal(string nome) {
  this->nome = nome;
}

Animal::~Animal() {}

string Animal::getNome() {
  return nome;
}

void Animal::setNome(string nome) {
  this->nome = nome;
}

void Animal::mostrarAnimais(vector<Animal *> x) {
  for(Animal *item: x) {
    cout << item->toString() << endl;
    item->som();

    Cachorro *ptCachorro = dynamic_cast<Cachorro *>(item);
    if (ptCachorro) {
        ptCachorro->rosnar();
    }

    cout << "==============================================" << endl;
  }
  cout << "Temos " << Cachorro::ct << " Cachorro(s)." << endl;
  cout << "Temos " << Gato::ct << " Gato(s)." << endl;
  cout << "Temos " << Vaca::ct << " Vaca(s)." << endl;
}

void Animal::som() {}
string Animal::toString() {}
