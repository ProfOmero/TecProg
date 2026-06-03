#include <iostream>

using namespace std;

int main() {
  string nome;
  double pc, alt;

  FILE *arq = fopen("pacientes.txt", "a");
  if (arq == NULL) {
     printf("Erro: Problema com o arquivo 'pacientes.txt'!!!");
     return(0);
  }

  while (true) {
    cout << "Nome (FIM para encerrar): ";
    getline(cin, nome);
    if (nome == "FIM")
       break;

    cout << "Peso Corporal (em kgs)..: ";
    cin >> pc;

    cout << "Altura (em metros)......: ";
    cin >> alt;

    getchar(); // limpa o buffer de entrada de dados

    cout << endl;

    fprintf(arq, "%s\n", nome.c_str());
    fprintf(arq, "%f; %f\n", pc, alt);
  }

  fclose(arq);

  return(0);
}
