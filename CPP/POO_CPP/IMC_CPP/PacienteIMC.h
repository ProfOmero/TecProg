#ifndef PACIENTEIMC_H_INCLUDED
#define PACIENTEIMC_H_INCLUDED

#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\CadastrarPessoa_CPP\Pessoa.h"

class PacienteIMC: public Pessoa {
   private:
     double pesoCorporal;
     double altura;

   public:
     PacienteIMC(int idPessoa, std::string nome, char sexo, Data *dtNasc,
       double pesoCorporal, double altura);
     ~PacienteIMC();

     double getPesoCorporal();
     void setPesoCorporal(double pesoCorporal);

     double getAltura();
     void setAltura(double altura);

     std::string toString();
 };

#endif // PACIENTEIMC_H_INCLUDED
