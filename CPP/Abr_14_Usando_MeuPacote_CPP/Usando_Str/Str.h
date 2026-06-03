#ifndef STR_H_INCLUDED
#define STR_H_INCLUDED

#include <iostream>

using namespace std;

bool ehMaiuscula(char c);
bool ehMinuscula(char c);
bool ehAlfabetico(char c);
bool ehVogal(char c);
bool ehConsoante(char c);
string repetir();
string repetir(char tipo);
string repetir(char tipo, int tam);
string repetir(string tipo, int tam);
string center(string s, int tam, char c);

#endif // STR_H_INCLUDED
