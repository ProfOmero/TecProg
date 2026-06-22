#include <iostream>
#include "Time.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\JogadoresDeFutebol_CPP\Jogador.cpp"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.cpp"

using namespace std;

int main() {
  Time *meuTime = new Time(1, "XYZ", new Pessoa(11, "Juca Bala", 'M', new Data(11, 5, 1989)));

  meuTime->adicionarJogador(new Jogador(1, "Jogador 1", 'M', new Data(1, 1, 1996), 1, 10000.00));
  meuTime->adicionarJogador(new Jogador(2, "Jogador 2", 'M', new Data(1, 1, 1997), 2, 20000.00));
  meuTime->adicionarJogador(new Jogador(3, "Jogador 3", 'M', new Data(1, 1, 1998), 3, 30000.00));
  meuTime->adicionarJogador(new Jogador(4, "Jogador 4", 'M', new Data(1, 1, 1999), 4, 40000.00));
  meuTime->adicionarJogador(new Jogador(5, "Jogador 5", 'M', new Data(1, 1, 2000), 5, 50000.00));

  meuTime->mostrarTime();

  return 0;
}
