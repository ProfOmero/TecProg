#include <iostream>
#include <cstring>
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\Abr_14_Usando_MeuPacote_CPP\Usando_CalculadoraIMC/CalculadoraIMC.cpp";

using namespace std;

int main() {
  char nome[100];
  double pc, alt;

  FILE *arq = fopen("pacientes.txt", "r");
  if (arq == NULL) {
     printf("Erro: arquivo 'pacientes.txt' \"não\" foi localizado!!!");
     return(0);
  }

  while (fgets(nome, 100, arq) != NULL) {
    nome[strlen(nome)-1] = '\0';
    fscanf(arq, "%lf; %lf\n", &pc, &alt);

    cout << toString(nome, pc, alt) << endl;
  }

  fclose(arq);

  return(0);
}
