#include <iostream>
#include <vector>
#include "Geral.h"
#include "OpcoesMenu.h"

using namespace std;

int main() {
    cls();

    vector<string> alunos;
    importar(&alunos);

    int opcao;

    do {
      cls();
      cout << "*** MENU PRINCIPAL ***" << endl;
      cout << "[ 1 ] Cadastrar Alunos" << endl;
      cout << "[ 2 ] Excluir Alunos" << endl;
      cout << "[ 3 ] Listar Alunos" << endl << endl;
      cout << "[ 9 ] Encerrar" << endl;
      cout << "**********************" << endl;

      do {
        cout << "Opção Desejada? ";
        cin >> opcao;
      } while ((opcao != 1) && (opcao != 2) &&
               (opcao != 3) && (opcao != 9));

      cout << endl;

      if (opcao == 1) {
         cadastrar(&alunos);
      }
      else if (opcao == 3) {
              listar(alunos);
           }
           else if (opcao == 2) {
                   excluir(&alunos);
                }
    } while (opcao != 9);

    exportar(alunos);

    cout << "<<< FIM DO PROGRAMA >>>" << endl;
    return 0;
}
