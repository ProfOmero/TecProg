#include <stdio.h>
#include "PacienteIMC.h"

int main() {
  int n;

  printf("Quantos pacientes? ");
  scanf("%d", &n);

  rgPacienteIMC pacientes[n];
  int i;

  printf("\n");

  for(i=0; i<n; i++) {
    printf("%do. paciente\n", (i+1));
    pacientes[i] = entrada();
  }

  for(i=0; i<n; i++) {
    printf("%do. paciente\n", (i+1));
    printf("%s\n", toString(pacientes[i]));
  }

  return 0;
}
