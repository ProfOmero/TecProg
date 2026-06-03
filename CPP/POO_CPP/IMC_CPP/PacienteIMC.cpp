#include <string>
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\CadastrarPessoa_CPP\Pessoa.cpp"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\Abr_14_Usando_MeuPacote_CPP\Usando_CalculadoraIMC\CalculadoraIMC.cpp"
#include "PacienteIMC.h"

PacienteIMC::PacienteIMC(int idPessoa, std::string nome, char sexo, Data *dtNasc,
  double pesoCorporal, double altura): Pessoa(idPessoa, nome, sexo, dtNasc) {
  this->pesoCorporal = pesoCorporal;
  this->altura = altura;
}

PacienteIMC::~PacienteIMC() {
}

double PacienteIMC::getPesoCorporal() {
  return pesoCorporal;
}

void PacienteIMC::setPesoCorporal(double pesoCorporal) {
  this->pesoCorporal = pesoCorporal;
}

double PacienteIMC::getAltura() {
  return altura;
}

void PacienteIMC::setAltura(double altura) {
  this->altura = altura;
}

std::string PacienteIMC::toString() {
  char result[500];
  double vlrIMC = calcularIMC(pesoCorporal, altura);

  sprintf(result, "%s\n"
                  "Peso Corporal: %.3lf kgs\n"
                  "Altura.......: %.2lf m\n"
                  "IMC..........: %.2lf (%s)\n",
    Pessoa::toString().c_str(),
    getPesoCorporal(),
    getAltura(),
    vlrIMC,
    interpretarIMC(vlrIMC).c_str());

  return(result);
}
