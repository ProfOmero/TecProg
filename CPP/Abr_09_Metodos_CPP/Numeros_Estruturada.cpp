#include <iostream>

using namespace std;

void mostrar(int n) {
  int i;

  cout << "{ ";
  for(i=1; i<=n; i++) {
    cout << i;
    if (i == n)
       cout << " }" << endl;
    else cout << ", ";
  }
}

int somar(int n) {
  int i, sm = 0;
  for(i=1; i<=n; i++) {
    sm = sm + i;
  }
  return(sm);
}

void resultados(int n) {
  mostrar(n);
  cout << "Soma = " << somar(n) << endl << endl;
}

int main() {
  resultados(7);
  resultados(5);
  resultados(10);

  return(0);
}
