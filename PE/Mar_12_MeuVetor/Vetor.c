#include "Vetor.h"
#include "Geral.h"
#include <stdlib.h>

int *criar(int tam) {
  int *result = (int *)malloc(sizeof(int) * tam);
  return(result);
}

void entrada(char *nome, int *x, int tam) {
  int i;
  for(i=0; i<tam; i++) {
    printf("%s[%d] = ", nome, i);
    scanf("%d", &x[i]);
  }
  linha('=', 30);
}

int sum(int *x, int tam) {
  int i, result = 0;
  for(i=0; i<tam; i++) {
    result += x[i];
  }
  return(result);
}

float avg(int *x, int tam) {
  return((float)sum(x, tam) / tam);
}

int menor(int *x, int tam) {
  int i, result = x[0];
  for(i=1; i<tam; i++) {
    if (x[i] < result) {
       result = x[i];
    }
  }
  return(result);
}

void saida(char *nome, int *x, int tam) {
  int i;
  printf("%s = { ", nome);
  for(i=0; i<tam; i++) {
    printf("%d", x[i]);
    if (i != (tam-1)) {
        printf(", ");
    }
  }
  printf(" } soma = %d; media = %.2f\n",
    sum(x, tam), avg(x, tam));

  printf("Menor valor = %d\n\n", menor(x, tam));
}

void liberar(int *x) {
  free(x);
}
