#include "Aluno.h"

string situacao(double freq, double nf) {
  if ((freq >= 75) && (nf >= 6.0))
     return("APROVADO");
  else if ((freq < 75.0) && (nf >= 6.0))
          return("REPROVADO POR FREQUÊNCIA");
       else if ((freq >= 75.0) && (nf < 6.0))
               return("REPROVADO POR NOTA");
            else return("REPROVADO POR NOTA E FREQUÊNCIA");
  }

string toString(string nome, double freq, double nf) {
  char result[200];

  sprintf(result, "Nome do Aluno: %s\n"
                  "Nota Final...: %.2f\n"
                  "Frequência...: %.2f%%\n"
                  "Situação.....: %s\n\n",
                  nome.c_str(),
                  nf,
                  freq,
                  situacao(freq, nf).c_str());

  return(result);
}
