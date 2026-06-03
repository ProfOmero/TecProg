#include <stdio.h>
#include "PacienteIMC.h"
#include <stdlib.h>

rgPacienteIMC entrada() {
  rgPacienteIMC result;

  fflush(stdin);

  printf("Nome do Paciente......: ");
  scanf("%[^\n]s", result.nome);

  printf("Peso Corporal (em kgs): ");
  scanf("%f", &result.pc);

  printf("Altura (em metros)....: ");
  scanf("%f", &result.alt);

  printf("--------------------------------------\n");

  return(result);
}

float calcularIMC(rgPacienteIMC paciente) {
  return(paciente.pc / (paciente.alt * paciente.alt));
}

char *interpretarIMC(float vlrIMC) {
   if (vlrIMC < 18.5)
      return("<<< Magreza >>>");
   else if (vlrIMC < 25.0)
           return("<<< Normal >>>");
        else if (vlrIMC < 30.0)
                return("<<< Sobrepeso >>>");
             else if (vlrIMC < 35.0)
                     return("<<< Obesidade Grau I >>>");
                  else if (vlrIMC < 40.0)
                          return("<<< Obesidade Grau II >>>");
                       else return("<<< Obesidade Grau III >>>");
}

char *toString(rgPacienteIMC paciente) {
  char *result = (char *)malloc(250);

  float vlrIMC = calcularIMC(paciente);

  sprintf(result, "Nome do Paciente: %s\n"
                  "Peso Corporal...: %.3f kgs\n"
                  "Altura..........: %.2f metros\n"
                  "IMC.............: %.2f (%s)\n",
                  paciente.nome,
                  paciente.pc,
                  paciente.alt,
                  vlrIMC, interpretarIMC(vlrIMC));

  return(result);
}
