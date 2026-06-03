#ifndef OPCOESMENU_H_INCLUDED
#define OPCOESMENU_H_INCLUDED

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

void exportar(vector<string> alunos);
void importar(vector<string> *alunos);
void cadastrar(vector<string> *alunos);
void listar(vector<string> alunos);
void excluir(vector<string> *alunos);

#endif // OPCOESMENU_H_INCLUDED
