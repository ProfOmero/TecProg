#include <iostream>
#include "Time.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\CadastrarPessoa_CPP\Pessoa.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\JogadoresDeFutebol_CPP\Jogador.h"

using namespace std;

Time::Time(int idTime, string nomeTime, Pessoa *tecnico) {
  this->idTime = idTime;
  this->nomeTime = nomeTime;
  this->tecnico = tecnico;
}

Time::~Time() {
}

int Time::getIdTime() {
  return idTime;
}

void Time::setIdTime(int idTime) {
  this->idTime = idTime;
}

string Time::getNomeTime() {
  return nomeTime;
}

void Time::setNomeTime(string nomeTime) {
  this->nomeTime = nomeTime;
}

Pessoa *Time::getTecnico() {
  return tecnico;
}

void Time::setTecnico(Pessoa *tecnico) {
  this->tecnico = tecnico;
}

void Time::adicionarJogador(Jogador *novoJogador) {
  jogadores.push_back(novoJogador);
}

void Time::mostrarTime() {
  char linha[100];

  cout << getNomeTime() << endl << endl;
  cout << "Técnico: " << getTecnico()->getNome() << endl << endl;
  cout << "Nome do Jogador............... .Idade. Posição............. ...Salário..." << endl;
  cout << "=========================================================================" << endl;

  double totSal = 0;
  for(Jogador *item: jogadores) {
    cout << item->toString();
    totSal = totSal + item->getSalario();
  }

  cout << "=========================================================================" << endl;
  sprintf(linha, "%60s R$ %10.2f\n", "TOTAL SALÁRIOS", totSal);
  cout << linha;
}
