#include <stdio.h>
#include <stdlib.h>
#include "Geral.h"
#include "Vetor.h"

int main() {
  int *a;
  int *b;

  a = criar(5);
  b = criar(8);

  cls();

  entrada("vetor A", a, 5);
  entrada("vetor B", b, 8);

  saida("vetor A", a, 5);
  saida("vetor B", b, 8);

  pause();

  return 0;
}
