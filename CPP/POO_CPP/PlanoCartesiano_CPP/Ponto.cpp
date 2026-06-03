#include <iostream>
#include "Ponto.h"

using namespace std;

Ponto::Ponto(int x, int y) {
  this->x = x;
  this->y = y;
}

Ponto::~Ponto() {
}

int Ponto::getX() {
  return x;
}

void Ponto::setX(int x) {
  this->x = x;
}

int Ponto::getY() {
  return y;
}

void Ponto::setY(int y) {
  this->y = y;
}

void Ponto::entrada() {
  cout << "coordenada x: ";
  cin >> x;

  cout << "coordenada y: ";
  cin >> y;
}

string Ponto::posicao() {
  if ((x > 0) && (y > 0))
     return("Q1");
  else if ((x < 0) && (y > 0))
     return("Q2");
  else if ((x < 0) && (y < 0))
     return("Q3");
  else if ((x > 0) && (y < 0))
     return("Q4");
  else if ((x != 0) && (y == 0))
     return("Eixo x");
  else if ((x == 0) && (y != 0))
     return("Eixo y");
  else return("Origem");
}

string Ponto::toString() {
  char result[200];

  sprintf(result, "(x: %d, y: %d) %s\n",
      x, y, posicao().c_str());

  return(result);
}
