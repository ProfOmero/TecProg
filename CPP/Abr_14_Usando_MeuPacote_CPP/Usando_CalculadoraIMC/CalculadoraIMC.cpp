#include "CalculadoraIMC.h"

double calcularIMC(double pc, double alt) {
  return(pc / (alt * alt));
}

string interpretarIMC(double vlrIMC) {
  if (vlrIMC < 18.5)
     return("Magreza");
  else if (vlrIMC < 25.0)
          return("Normal");
       else if (vlrIMC < 30.0)
               return("Sobrepeso");
            else if (vlrIMC < 40.0)
                    return("Obesidade");
                 else return("Obesidade Grave");
}

string toString(string nome, double pc, double alt) {
  char result[200];
  double vlrIMC = calcularIMC(pc, alt);

  sprintf(result, "Nome do Paciente: %s\n"
                  "Peso Corporal...: %.3f kgs\n"
                  "Altura..........: %.2f metros\n"
                  "IMC.............: %.2f (%s)\n",
                  nome.c_str(),
                  pc,
                  alt,
                  vlrIMC, interpretarIMC(vlrIMC).c_str());

  return(result);
}
