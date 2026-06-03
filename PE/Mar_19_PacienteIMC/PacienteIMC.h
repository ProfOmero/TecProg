#ifndef PACIENTEIMC_H_INCLUDED
#define PACIENTEIMC_H_INCLUDED

// Tipo Abstrato de Dados "PacienteIMC"

typedef struct {
  char nome[50];
  float pc;         // peso corporal em kgs
  float alt;        // altura em metros
} rgPacienteIMC;

rgPacienteIMC entrada();
float calcularIMC(rgPacienteIMC paciente);
char *interpretarIMC(float vlrIMC);
char *toString(rgPacienteIMC paciente);

#endif // PACIENTEIMC_H_INCLUDED
