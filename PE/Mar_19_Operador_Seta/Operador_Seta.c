#include <stdio.h>
#include <PacienteIMC.h>

int main() {
  rgPacienteIMC eu = {"Omero Francisco Bertol", 89.500, 1.77};

  printf("Nome do Paciente: %s\n"
         "Peso Corporal...: %.3f kgs\n"
         "Altura..........: %.2f metros\n\n\n",
         eu.nome,
         eu.pc,
         eu.alt);

  rgPacienteIMC *p = &eu;

  printf("Nome do Paciente: %s\n"
         "Peso Corporal...: %.3f kgs\n"
         "Altura..........: %.2f metros\n",
         p->nome,
         p->pc,
         p->alt);


  return(0);
}
