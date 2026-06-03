#include <iostream>

using namespace std;

int main() {
  int n = 10;
  int m[n][n];
  int i, j, vlr = 0;

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      m[i][j] = vlr;
      vlr++;
    }
  }

  char valor[10];
  for(i=0; i<n; i++) {
    cout << "| ";
    for(j=0;j<n; j++) {
      sprintf(valor, "%02d ", m[i][j]);
      cout << valor;
    }
    cout << "|" << endl;
  }

  cout << "\nDiagonal Principal.:" << endl;
  int smDP = 0;
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      if (i == j) {
         sprintf(valor, "%02d ", m[i][j]);
         cout << valor;
         smDP = smDP + m[i][j];
      }
    }
  }
  cout << "soma = " << smDP << endl << endl;

  cout << "Diagonal Secundária:" << endl;
  int smDS = 0;
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      if ((i + j) == (n - 1)) {
         sprintf(valor, "%02d ", m[i][j]);
         cout << valor;
         smDS = smDS + m[i][j];
      }
    }
  }
  cout << "soma = " << smDS << endl << endl;

  return(0);
}
