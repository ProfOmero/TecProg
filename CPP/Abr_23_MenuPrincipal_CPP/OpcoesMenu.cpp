#include <string>
#include "OpcoesMenu.h"
#include "Geral.h"
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\Abr_14_Usando_MeuPacote_CPP\Usando_Aluno\Aluno.cpp"

using namespace std;

void exportar(vector<string> alunos) {
  FILE *arq;
  arq = fopen("alunos.txt", "w");
  if (arq == NULL) {
     cout << "Erro: Exportação dos dados!!!" << endl << endl;
  }
  else {
    for(string item: alunos) {
      fprintf(arq, "%s\n", item.c_str());
    }
  }

  fclose(arq);
}

void importar(vector<string> *alunos) {
  FILE *arq;
  arq = fopen("alunos.txt", "r");
  if (arq == NULL) {
     cout << "Arquivo 'alunos.txt' está vazio!!!" << endl << endl;
  }
  else {
    char item[100];
    while (fscanf(arq, "%[^\n]s", item) != EOF) {
      fgetc(arq);
      alunos->push_back(item);
    }

    fclose(arq);
  }
}

void cadastrar(vector<string> *alunos) {
  cls();

  string nome;
  double freq, nf;

  while (true) {
    esvaziar();

    cout << "Nome (FIM para encerrar):" << endl;
    getline(cin, nome);
    if (nome == "FIM")
       break;

    cout << endl;
    cout << "Frequência: ";
    cin >> freq;

    cout << "Nota Final: ";
    cin >> nf;

    cout << endl;

    if (confirmou("Confirma os dados (S/*)? ")) {
       alunos->push_back(nome.c_str());
       alunos->push_back(to_string(freq));
       alunos->push_back(to_string(nf));
       cout << "<<< Cadastrado >>>" << endl;
    }
    else {
       cout << "<<< \"Não\" cadastrado >>>" << endl;
    }

    cout << endl;
  }

  cout << endl;
}

void listar(vector<string> alunos) {
  cls();

  int i, n = alunos.size();
  for(i=0; i<n; i+=3) {
    cout << ((i/3)+1) << "o. aluno:" << endl;
    cout << toString(alunos[i], stod(alunos[i+1]), stod(alunos[i+2]));
  }
  pause();
}

void excluir(vector<string> *alunos) {
  cls();

  int i, n = alunos->size() / 3;

  while (true) {
    do {
      cout << "Ordem (-1 para encerrar): ";
      cin >> i;
    } while ((i < -1) || (i > n) || (n == 0));

    if (i == -1)
        break;

    cout << alunos->at((i-1)*3) << endl;
    if (confirmou("Excluir (S/*)? ")) {
       alunos->erase(alunos->begin()+((i-1)*3));
       alunos->erase(alunos->begin()+((i-1)*3));
       alunos->erase(alunos->begin()+((i-1)*3));
       cout << "<<< Excluído >>>" << endl;
    }
    else {
       cout << "<<< Mantido >>>" << endl;
    }
    cout << endl;
  }
}
