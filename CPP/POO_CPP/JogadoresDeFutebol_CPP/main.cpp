#include <iostream>
#include <vector>
#include "Jogador.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.cpp"

using namespace std;

void mostrarJogadores(vector<Jogador*> time) {
  char linha[100];
  double totSal = 0;
  for(Jogador *item: time) {
    cout << item->toString();

    totSal += item->getSalario();
  }

  cout << endl;
  sprintf(linha, "Total dos Salários = R$ %.2f\n", totSal);
  cout << linha << endl;
}

int main() {
  // coleção de objetos Jogador
  vector<Jogador*> time;

  time.push_back(new Jogador(1, "Jogador 1", 'M', new Data(1, 1, 2000), 1, 100000.00));
  time.push_back(new Jogador(2, "Jogador 2", 'M', new Data(1, 1, 2001), 2, 20000.00));
  time.push_back(new Jogador(3, "Jogador 3", 'M', new Data(1, 1, 2002), 3, 300000.00));
  time.push_back(new Jogador(4, "Jogador 4", 'M', new Data(1, 1, 2003), 4, 40000.00));
  time.push_back(new Jogador(5, "Jogador 5", 'M', new Data(1, 1, 2004), 5, 500000.00));

  mostrarJogadores(time);

  return 0;
}
