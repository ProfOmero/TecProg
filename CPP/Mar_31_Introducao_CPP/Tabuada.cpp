#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int i, n;

  do {
    cout << "n: ";
    cin >> n;
  } while ((n < 1) || (n > 9));

  cout << endl;

  cout << "+-------------+" << endl;
  for(i=1; i<=10; i++) {
    cout << "| " << n << " x " << setw(2) << i << " = " << setw(2) << (n*i) << " |" << endl;
  }
  cout << "+-------------+" << endl;

  return(0);
}
