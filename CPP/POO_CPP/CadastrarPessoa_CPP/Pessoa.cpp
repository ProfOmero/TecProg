#include <iostream>
#include "Pessoa.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.h"

using namespace std;

Pessoa::Pessoa(int idPessoa, string nome, char sexo, Data *dtNasc) {
  this->idPessoa = idPessoa;
  this->nome = nome;
  this->sexo = sexo;
  this->dtNasc = dtNasc;
}

Pessoa::~Pessoa() {
}

int Pessoa::getIdPessoa() {
  return(idPessoa);
}

void Pessoa::setIdPessoa(int idPessoa) {
  this->idPessoa = idPessoa;
}

string Pessoa::getNome() {
  return nome;
}

void Pessoa::setNome(string nome) {
  this->nome = nome;
}

char Pessoa::getSexo() {
  return sexo;
}

void Pessoa::setSexo(char sexo) {
  this->sexo = sexo;
}

Data *Pessoa::getDtNasc() {
  return dtNasc;
}

void Pessoa::setDtNasc(Data *dtNasc) {
  this->dtNasc = dtNasc;
}

void Pessoa::listarPessoas(vector<Pessoa*> x) {
  for(Pessoa *item: x) {
    cout << item->toString() << endl << endl;
  }
}

string Pessoa::toString() {
  char result[200];
  sprintf(result, "Id. Pessoa...: %d\n"
                  "Nome.........: %s\n"
                  "Sexo.........: %c\n"
                  "Nascimento...: %s",
    idPessoa,
    nome.c_str(),
    sexo,
    dtNasc->toString(true).c_str());

  return(result);
}
