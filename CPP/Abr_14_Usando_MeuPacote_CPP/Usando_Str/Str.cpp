#include "Str.h"

bool ehMaiuscula(char c) {
  return((c >= 'A') && (c <= 'Z'));
}

bool ehMinuscula(char c) {
  return((c >= 'a') && (c <= 'z'));
}

bool ehAlfabetico(char c) {
  return(ehMaiuscula(c) || ehMinuscula(c));
}

bool ehVogal(char c) {
  string vogais = "AEIOUaeiou";
  return(vogais.find(c)!=-1);
}

bool ehConsoante(char c) {
  return(ehAlfabetico(c) && !ehVogal(c));
}

string repetir() {
  string result = "";

  for(int i=1; i<=20; i++) {
    result += "=";
  }
  return(result);
}

string repetir(char tipo) {
  string result = "";

  for(int i=1; i<=20; i++) {
    result += tipo;
  }
  return(result);
}

string repetir(char tipo, int tam) {
  string result = "";

  for(int i=1; i<=tam; i++) {
    result += tipo;
  }
  return(result);
}

string repetir(string tipo, int tam) {
  string result = "";

  for(int i=1; i<=tam; i++) {
    result += tipo;
  }
  return(result);
}

string center(string s, int tam, char c) {
  int esq = (tam - s.length()) / 2;
  int dir = esq;
  dir += ((esq + s.length() + dir) != tam)?1:0;
  return(repetir(c, esq) + s + repetir(c, dir));
}
