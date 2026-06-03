#include "geral.h"

void cls() {
  system("cls");
}

void pause() {
  system("pause");
}

void linha(char tipo, int tam) {
  int i;
  for(i=1; i<=tam; i++) {
    printf("%c", tipo);
  }
  printf("\n");
}
