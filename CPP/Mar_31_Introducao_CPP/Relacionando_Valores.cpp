#include <iostream>

using namespace std;

int main() {
  int i, n, a, b;

  cout << "Quantos pares de valores? ";
  cin >> n;

  cout << endl;

  for(i=1; i<=n; i++) {
    cout << i << "o. par de valores:" << endl;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << endl;

    if (a > b)
       cout << a << " > " << b << endl;
    else if (a == b)
            cout << a << " = " << b << endl;
         else cout << a << " < " << b << endl;

    cout << "---------------------------------" << endl;
  }

  return(0);
}
