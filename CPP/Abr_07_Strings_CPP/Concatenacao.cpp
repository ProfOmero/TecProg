#include <iostream>

using namespace std;

int main() {
  int i;
  char j;
  string maius = "", minus = "", nros = "";

  for(i=0; i<26; i++) {
    maius = maius + (char)('A' + i) + ' ';
    minus = minus + (char)('a' + i) + ' ';
  }

  for(j='0'; j<='9'; j++) {
    nros = nros + j;
    if (j != '9') {
       nros = nros + ", ";
    }
  }

  cout << minus << endl;
  cout << maius << endl << endl;
  cout << nros << endl;

  cout << endl << 'A' << (char)('A'+32) << endl;

  return(0);
}
