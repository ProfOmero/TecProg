#include <iostream>
#include <string>

using namespace std;

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
  double vlrIMC = calcularIMC(pc, alt);

  char result[200];

  sprintf(result, "Nome do Paciente: %s\n"
                  "Peso Corporal...: %.2f kgs\n"
                  "Altura..........: %.2f metros\n"
                  "IMC.............: %.2f (%s)\n",
                  nome.c_str(),
                  pc,
                  alt,
                  vlrIMC, interpretarIMC(vlrIMC).c_str());

  return(result);
}

int main() {
  char nome[100];
  double pc, alt;

  cout << "Nome do Paciente......: ";
  cin.getline(nome, 100);

  cout << "Peso Corporal (em Kgs): ";
  cin >> pc;

  cout << "Altura (em metros)....: ";
  cin >> alt;

  cout << endl;
  cout << toString(nome, pc, alt) << endl;

  return(0);
}
