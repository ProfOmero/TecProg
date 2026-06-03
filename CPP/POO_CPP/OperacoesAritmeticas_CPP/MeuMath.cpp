#include <iostream>
#include "MeuMath.h"

using namespace std;

MeuMath::MeuMath(int a, int b) {
  this->a = a;
  this->b = b;
}

int MeuMath::getA() {
  return a;
}

void MeuMath::setA(int a) {
  this->a = a;
}

int MeuMath::getB() {
  return b;
}

void MeuMath::setB(int b) {
  this->b = b;
}

void MeuMath::entrada() {
  cout << "a: ";
  cin >> a;

  cout << "b: ";
  cin >> b;
}

int MeuMath::soma() {
  return(a + b);
}

int MeuMath::sub() {
  return(a - b);
}

int MeuMath::mult() {
  return(a * b);
}

int MeuMath::divInt() {
  if (b != 0)
     return(a / b);
  else return(0);
}

double MeuMath::divReal() {
  if (b != 0)
     return(a / (double)b);
  else return(0);
}

string MeuMath::toString() {
  char result[200];

  sprintf(result, "%d + %d = %d\n"
                  "%d - %d = %d\n"
                  "%d x %d = %d\n"
                  "%d / %d = %d (divisao inteira)\n"
                  "%d / %d = %.2f (divisao real)\n",
                  a, b, soma(),
                  a, b, sub(),
                  a, b, mult(),
                  a, b, divInt(),
                  a, b, divReal());

  return(result);
}
