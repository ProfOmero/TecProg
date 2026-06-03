#include <iostream>

using namespace std;

void tabuada(int n) {
  int i;
  char linha[20];

  cout << "+-------------+" << endl;
  for(i=1; i<=10; i++) {
    sprintf(linha, "| %d x %2d = %2d |", n, i, (n*i));
    cout << linha << endl;
  }
  cout << "+-------------+" << endl;
}

int main() {
  int n;

  while (true) {
    do {
      cout << "n, -1 para encerrar: ";
      cin >> n;
    } while ((n < -1) || (n > 9));
    if (n == -1)
       break;

    cout << endl;
    tabuada(n);
    cout << endl;
  }

  return(0);
}
