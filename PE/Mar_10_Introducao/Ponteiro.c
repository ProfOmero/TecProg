#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;
  int *p; // variável do tipo ponteiro

  p = &n;

  printf("n = %d (atraves do ponteiro 'p' = %d)\n\n", n, *p);

// alocação dinâmica de memória
  p = (int *)malloc(sizeof(int));
  *p = 20;

  printf("valor no endereço alocado para 'p' = %d\n\n", *p);
  free(p); // liberando a memória alocada

// alocando um vetor com 10 posições
  #define n 10
  p = (int *)malloc(sizeof(int) * n);

  int i;
  for(i=0; i<n; i++) {
    p[i] = 10 * i;
  }

  for(i=0; i<n; i++) {
    printf("[%d]: %d, %d\n", i, p[i], *(p+i));
  }

  return(0);
}
