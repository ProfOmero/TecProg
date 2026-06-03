#include <iostream>
#include "Str.h"

using namespace std;

int main() {
  cout << "A " << (ehMaiuscula('A')?"é maiúscula":"\"não\" é maiúscula") << endl;
  cout << "x " << (ehMaiuscula('x')?"é maiúscula":"\"não\" é maiúscula") << endl;
  cout << repetir() << endl;

  cout << "a " << (ehVogal('a')?"é vogal":"\"não\" é vogal") << endl;
  cout << "9 " << (ehVogal('9')?"é vogal":"\"não\" é vogal") << endl;
  cout << repetir("<< ** >>", 5) << endl;

  cout << "X " << (ehConsoante('X')?"é consoante":"\"não\" é consoante") << endl;
  cout << "i " << (ehConsoante('i')?"é consoante":"\"não\" é consoante") << endl;
  cout << repetir() << endl;

  cout << repetir('*') << endl;
  cout << repetir('*', 10) << endl;
  cout << repetir("ABC", 5) << endl;

  cout << center("UTFPR - CURITIBA/PR", 50, '.') << endl;

  return 0;
}
