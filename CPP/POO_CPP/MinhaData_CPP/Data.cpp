#include <iostream>
#include <ctime>
#include "Data.h"

using namespace std;

Data::Data(int dia, int mes, int ano) {
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
}

Data::Data() {
  time_t timer;
  struct tm *horarioLocal;

  time(&timer); // Obtem informações de data e hora
  horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

  dia = horarioLocal->tm_mday;
  mes = horarioLocal->tm_mon + 1;
  ano = horarioLocal->tm_year + 1900;
}

int Data::getDia() {
  return dia;
}

void Data::setDia(int dia) {
  this->dia = dia;
}

int Data::getMes() {
  return mes;
}

void Data::setMes(int mes) {
  this->mes = mes;
}

int Data::getAno() {
  return ano;
}

void Data::setAno(int ano) {
  this->ano = ano;
}

int Data::calcularIdade() {
  Data *hoje = new Data();
  int idade = hoje->ano - ano;
  if ((hoje->mes < mes) ||
     ((hoje->mes == mes) && (hoje->dia < dia)))
      idade = idade - 1;

   return(idade);
}

string Data::nomeMes(bool abreviado) {
  if (abreviado) {
      string meses[] = {"xxx", "jan", "fev", "mar", "abr",
        "mai", "jun", "jul", "ago", "set", "out", "nov", "dez"};
      return(meses[mes]);
  }
  else {
      string meses[] = {"xxx", "janeiro", "fevereiro", "março", "abril",
        "maio", "junho", "julho", "agosto", "setembro", "outubro",
        "novembro", "dezembro"};
      return(meses[mes]);
  }
}

string Data::toString(bool mostrarIdade) {
  char result[200];

  if (mostrarIdade)
      sprintf(result, "%02d/%s/%d (%d anos)", dia, nomeMes(true).c_str(), ano,
        calcularIdade());
   else
      sprintf(result, "%02d/%s/%d", dia, nomeMes(true).c_str(), ano);

   return(result);
}
