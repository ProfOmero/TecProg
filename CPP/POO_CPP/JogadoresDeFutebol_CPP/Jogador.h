#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\CadastrarPessoa_CPP\Pessoa.h"

class Jogador: public Pessoa {
   private:
     int posicao;
     double salario;

   public:
     Jogador(int idPessoa, std::string nome, char sexo, Data *dtNasc,
       int posicao, double salario);
     ~Jogador();

     double getPosicao();
     void setPosicao(double posicao);

     double getSalario();
     void setSalario(double salario);

     std::string nomePosicao();
     std::string toString();
 };

#endif // JOGADOR_H_INCLUDED
