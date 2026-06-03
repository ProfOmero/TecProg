#include <stdio.h>

int n = 0; // variável global

// 1a. forma: retornando valor através de uma variável global
void dez() {
  n = 10;
}

// 2a. forma: retornando valor através da propria função
int dobro(int n) {
  return(n * 2);
}

// 3a. forma: retornando valor através de parâmetro passado por referência
void triplo(int *x) {
  *x = *x * 3;
}

int main() {
  printf("n = %d (antes da funcao 'dez')\n", n);
  dez();
  printf("n = %d (depois da funcao 'dez')\n\n", n);

  printf("n = %d (antes da funcao 'dobro')\n", n);
  n = dobro(n);
  printf("n = %d (depois da funcao 'dobro')\n\n", n);

  printf("n = %d (antes da funcao 'triplo')\n", n);
  triplo(&n);
  printf("n = %d (depois da funcao 'triplo')\n", n);

  return(0);
}
