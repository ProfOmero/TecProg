#include <iostream>
#include <vector>
#include <cstring>
#include "C:\Meus Documentos\Professor do DAELN\Aulas\TecProg\CPP\Abr_14_Usando_MeuPacote_CPP\Usando_Str/Str.cpp"

using namespace std;

void listar(vector<string> x) {
  int i, n = x.size();
  for(i=0; i<n; i++) {
    cout << i << ": " << x[i].c_str()+repetir('.', 30-strlen(x[i].c_str())) << endl;
  }
  cout << endl;
}

void listar(vector<string> x, int i) {
  for(string item: x) {
    cout << i << ": " << x[i].c_str()+repetir('.', 30-strlen(x[i].c_str())) << endl;
    i++;
  }
  cout << endl;
}

int main() {
  vector<string> patota;

  string nome;

  while (true) {
    listar(patota, 0);

    cout << "Nome, FIM para encerrar:" << endl;
    getline(cin, nome);
    if (nome == "FIM")
       break;

    patota.push_back(nome.c_str());
    cout << repetir('*', 33) << endl;
  }
}
