#include <iostream>
#include <cstdlib>

using namespace std;

void cls(void) {
  system("cls");
}

void pause(void) {
  system("PAUSE");
}

void esvaziar(void) {
  getchar(); // esvazia o buffer de entrada de dados
}

bool confirmou(char *titulo) {
  char cf;
  esvaziar();
  cout << endl << titulo;
  cin >> cf;
  if ((cf == 'S') || (cf == 's'))
     return(true);
  else return(false);
}
