#include <string>
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\CadastrarPessoa_CPP\Pessoa.cpp"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\Abr_14_Usando_MeuPacote_CPP\Usando_Str\Str.cpp"
#include "Jogador.h"

Jogador::Jogador(int idPessoa, string nome, char sexo, Data *dtNasc,
  int posicao, double salario): Pessoa(idPessoa, nome, sexo, dtNasc) {
  this->posicao = posicao;
  this->salario = salario;
}

Jogador::~Jogador() {
}

double Jogador::getPosicao() {
  return posicao;
}

void Jogador::setPosicao(double posicao) {
  this->posicao = posicao;
}

double Jogador::getSalario() {
  return salario;
}

void Jogador::setSalario(double salario) {
  this->salario = salario;
}

string Jogador::nomePosicao() {
  string pos[] = {"XXX", "Goleiro", "Lateral Direito",
      "Zagueiro", "Lateral Esquerdo", "Meio-Campo",
      "Atacante"};

  return(pos[posicao]);
}

string Jogador::toString() {
  char result[500];

  sprintf(result, "%s %d anos %-20s R$ %10.2f\n",
    (getNome()+repetir('.', 30-getNome().length())).c_str(),
    getDtNasc()->calcularIdade(),
    nomePosicao().c_str(),
    getSalario());

  return(result);
}
