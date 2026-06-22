#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <vector>
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\CadastrarPessoa_CPP\Pessoa.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\JogadoresDeFutebol_CPP\Jogador.h"

using namespace std;

class Time { // TODO
  private:
    int idTime;
    string nomeTime;
    Pessoa *tecnico; // relacionamento de associação
    vector<Jogador*> jogadores; // relacionamento de agregação (PARTES)

  public:
    Time(int idTime, string nomeTime, Pessoa *tecnico);
    ~Time();

    int getIdTime();
    void setIdTime(int idTime);

    string getNomeTime();
    void setNomeTime(string nomeTime);

    Pessoa* getTecnico();
    void setTecnico(Pessoa *tecnico);

    void adicionarJogador(Jogador *novoJogador);
    void mostrarTime();
};

#endif // TIME_H_INCLUDED
