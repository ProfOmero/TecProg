#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> x;

  cout << "Tamanho: " << x.size() << endl;

  x.push_back("Juca Bala");
  x.push_back("Joaquim Bertol");
  x.push_back("Vanessa Babinski");
  x.push_back("Terezinha Lurdes Bertol");
  x.push_back("Alzemiro Bertol");
  x.insert(x.begin()+1, "Mariazinha do Socorro");

  x.erase(x.begin());

  cout << "Tamanho: " << x.size() << endl << endl;

  int i, n = x.size();
  for(i=0; i<n; i++) {
    cout << i << ": " << x[i] << endl;
  }

  return(0);
}
