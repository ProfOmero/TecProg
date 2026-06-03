#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Pessoa.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\POO_CPP\MinhaData_CPP\Data.cpp"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\Abr_14_Usando_MeuPacote_CPP\Usando_Aluno\Geral.cpp"

using namespace std;

int main() {
    // coleção de objetos Pessoa
    vector<Pessoa*> pessoas;

    int idPessoa;
    string nome, dt;
    char sexo;
    int dia, mes, ano;

    while (true) {
      cout << "Id. Pessoa (-1 para encerrar): ";
      cin >> idPessoa;
      if (idPessoa == -1)
          break;

      esvaziar();

      cout << "Nome.........................: ";
      getline(cin, nome);

      cout << "Sexo.........................: ";
      cin >> sexo;

      esvaziar();

      cout << "Nascimento (dia/mes/ano).....: ";
      getline(cin, dt);

      stringstream ss(dt);
      string token;
      vector<string> partes;
      while (getline(ss, token, '/')) {
        partes.push_back(token);
      }
      dia = stoi(partes[0]);
      mes = stoi(partes[1]);
      ano = stoi(partes[2]);

      if (confirmou("Confirma os dados (S/N)......: ")) {
         pessoas.push_back(new Pessoa(idPessoa, nome, sexo, new Data(dia, mes, ano)));
      }
      cout << "--------------------------------------" << endl;
    }

    cout << endl;
    Pessoa::listarPessoas(pessoas);
    return 0;
}
