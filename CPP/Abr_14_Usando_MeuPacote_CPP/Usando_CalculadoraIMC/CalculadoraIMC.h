#ifndef CALCULADORAIMC_H_INCLUDED
#define CALCULADORAIMC_H_INCLUDED

#include <iostream>

using namespace std;

double calcularIMC(double pc, double alt);
string interpretarIMC(double vlrIMC);
string toString(string nome, double pc, double alt);

#endif // CALCULADORAIMC_H_INCLUDED
