#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
  char s[100];
  int i;

  cout << "Informe uma String:" << endl;
  cin.getline(s, 100);

  cout << endl;
  for(i=0; i<strlen(s); i++) {
    cout << "s[" <<
     i << "] = " <<
     s[i] << ' ' <<
     (char)tolower(s[i]) << ' ' <<
     (char)toupper(s[i]) << endl;
  }

  return(0);
}
