#include <iostream>
#include <string>

using namespace std;

int main() {
  int decimal;
  string binario = "";

  cout << "Valor Decimal: ";
  cin >> decimal;

  cout << endl;

  cout << decimal << " na base decimal = ";

  do {
    if ((decimal%2) == 0)
       binario = "0" + binario;
    else binario = "1" + binario;

    decimal = decimal / 2;
  } while (decimal != 0);

  cout << binario << " na base binária." << endl;

  return(0);
}
