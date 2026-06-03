#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Tamanho do vetor?" << endl;
  cin >> n;

  int x[n];
  int i;

  cout << endl;

  for(i=0; i<n; i++) {
    cout << (i+1) << "o. item de " << n << ", x[" << i << "] = ";
    cin >> x[i];
  }

  int sm = 0;
  for(i=0; i<n; i++) {
    sm = sm + x[i];
  }
  double md = sm / (double)n;

  cout << endl;
  cout << "x = { ";
  for(i=0; i<n; i++) {
    cout << x[i];
    if (i != (n-1))
       cout << ", ";
  }

  cout << " } soma = " << sm << "; média = " << md << "." << endl;

  return(0);
}
