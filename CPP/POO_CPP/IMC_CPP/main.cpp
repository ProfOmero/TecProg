#include <iostream>
#include "PacienteIMC.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.cpp"

using namespace std;

int main() {
  PacienteIMC *eu = new PacienteIMC(1, "Omero Francisco Bertol", 'M',
    new Data(30, 11, 1965), 89.800, 1.77);

  PacienteIMC *fulanoDeTal = new PacienteIMC(2, "Fulano de Tal", 'M',
    new Data(5, 4, 1990), 70.500, 1.69);

  cout << eu->toString() << endl;
  cout << fulanoDeTal->toString() << endl;

  return 0;
}
