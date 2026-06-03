#include "Vetor.h"

void entrada(string nome, int x[], int n) {
  for(int i=0; i<n; i++) {
    cout << (i+1) << "o. item de " << n << ", " << nome << "[" << i << "] = ";
    cin >> x[i];
  }
  cout << endl;
}

string mostrar(string nome, int x[], int n) {
  string result = nome + " = { ";

  for(int i=0; i<n; i++) {
    result += to_string(x[i]) + " ";
  }
  result += "}\n";

  return(result);
}

int sum(int x[], int n) {
  int result = 0;
  for(int i=0; i<n; i++) {
    result += x[i];
  }
  return(result);
}

double avg(int x[], int n) {
  return(sum(x, n) / (double)n);
}

int min(int x[], int n) {
  int menorValor = x[0];
  for(int i=1; i<n; i++) {
    if (x[i] < menorValor) {
       menorValor = x[i];
    }
  }
  return(menorValor);
}

int max(int x[], int n) {
  int maiorValor = x[0];
  for(int i=1; i<n; i++) {
    if (x[i] > maiorValor) {
       maiorValor = x[i];
    }
  }
  return(maiorValor);
}

string toString(string nome, int x[], int n) {
  char result[200];

  sprintf(result, "%s\n"
                  "Soma dos itens        = %d\n"
                  "Valor Médio dos itens = %.2f\n"
                  "Menor Valor dos itens = %d\n"
                  "Maior Valor dos itens = %d\n",
                  mostrar(nome, x, n).c_str(),
                  sum(x, n),
                  avg(x, n),
                  min(x, n),
                  max(x, n));

  return(result);
}
