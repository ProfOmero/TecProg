#include <iostream>
#include "Aluno.h"
#include "Geral.h"

using namespace std;

int main() {
  string nome;
  double freq, nf;

  while (true) {
    cout << "Nome do Aluno, FIM para encerrar:" << endl;
    getline(cin, nome);
    if (nome == "FIM")
       break;

    cout << endl;

    cout << "Frequência: ";
    cin >> freq;

    cout << "Nota Final: ";
    cin >> nf;

    if (confirmou("Confirma os dados (S/*)? ")) {
        cout << endl;
        cout << toString(nome, freq, nf) << endl;
    }

    esvaziar();
  }

  return 0;
}
