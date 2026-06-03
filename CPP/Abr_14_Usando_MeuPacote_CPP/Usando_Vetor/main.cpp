#include <iostream>
#include "Vetor.h"

using namespace std;

int main() {
  int a[7];
  int b[5];

  entrada("a", a, 7);
  entrada("b", b, 5);

  cout << toString("a", a, 7) << endl << endl;
  cout << toString("b", b, 5) << endl;

  return 0;
}
