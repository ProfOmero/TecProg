#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include <string>
#include <vector>
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.h"

using namespace std;

class Pessoa {
  private:
    int idPessoa;
    string nome;
    char sexo;
    Data *dtNasc; // relacionamento de associação

  public:
    Pessoa(int idPessoa, string nome, char sexo, Data *dtNasc);
    ~Pessoa();

    int getIdPessoa();
    void setIdPessoa(int idPessoa);

    string getNome();
    void setNome(string nome);

    char getSexo();
    void setSexo(char sexo);

    Data *getDtNasc();
    void setDtNasc(Data *dtNasc);

    static void listarPessoas(vector<Pessoa*> x);
    string toString();
};

#endif // PESSOA_H_INCLUDED
