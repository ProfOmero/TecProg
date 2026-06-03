#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b, divInt, resto;
  double divReal;

  try {
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    if (b == 0)
      throw 10;
    else {
      divInt = a / b;
      resto = a % b;
      divReal = a / (double)b;
    }
    cout << endl;
    cout << a << " / " << b << " = " << divInt << " (divisão inteira)\n";
    cout << a << " % " << b << " = " << resto << " (resto da divisão inteira)\n";
    cout << a << " / " << b << " = " << divReal << " (divisão real)\n";
  }
  catch (int e) {
    cout << endl << "Erro: Divisão por zero!!!" << endl;
  }

  return(0);
}
