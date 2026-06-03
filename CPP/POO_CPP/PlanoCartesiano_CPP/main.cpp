#include <iostream>
#include <vector>
#include "Ponto.h"

using namespace std;

int main() {
  int i, n;
  Ponto *p;

  cout << "Quantos pontos? ";
  cin >> n;

  vector<Ponto> pontos;

  cout << endl;

  for(i=0; i<n; i++) {
    cout << (i+1) << "o. ponto\n";

    p = new Ponto(0, 0);
    p->entrada();
    pontos.push_back(*p);
    cout << endl;
  }

  for(i=0; i<n; i++) {
    cout << (i+1) << "o. ponto: " << pontos[i].toString();
  }

  return 0;
}
