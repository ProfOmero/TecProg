#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"
#include "Vaca.h"

using namespace std;

// Variáveis das Classes
int Cachorro::ct = 0;
int Gato::ct = 0;
int Vaca::ct = 0;

int main() {
  vector<Animal *> mundoAnimal;

  mundoAnimal.push_back(new Gato("Manda-Chuva"));
  mundoAnimal.push_back(new Cachorro("Juca Bala"));
  mundoAnimal.push_back(new Vaca("Mimosa"));
  mundoAnimal.push_back(new Cachorro("Rim Tim Tim"));
  mundoAnimal.push_back(new Gato("Marceline"));
  mundoAnimal.push_back(new Gato("Hexa"));
  mundoAnimal.push_back(new Cachorro("Rex"));
  mundoAnimal.push_back(new Vaca("Malhada"));

  Animal::mostrarAnimais(mundoAnimal);

  return 0;
}
