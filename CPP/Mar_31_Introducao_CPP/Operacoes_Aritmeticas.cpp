#include <iostream>

using namespace std;

int main() {
  int a, b, soma, sub, mult, divInt, resto;
  float divReal;

  cout << "a: ";
  cin >> a;

  cout << "b: ";
  cin >> b;

  cout << endl;

  soma = a + b;
  sub = a - b;
  mult = a * b;
  divInt = a / b;
  resto = a % b;
  divReal = a / (float)b;

  cout << a << " + " << b << " = " << soma << endl;
  cout << a << " - " << b << " = " << sub << endl;
  cout << a << " X " << b << " = " << mult << endl;
  cout << a << " / " << b << " = " << divReal << " (divisão real)" << endl;
  cout << a << " / " << b << " = " << divInt << " (divisão inteira)" << endl;
  cout << a << " % " << b << " = " << resto << " (resto da divisão)" << endl;

  return(0);
}
