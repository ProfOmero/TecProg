#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED

int *criar(int tam);
void entrada(char *nome, int *x, int tam);
int sum(int *x, int tam);
float avg(int *x, int tam);
int menor(int *x, int tam);
void saida(char *nome, int *x, int tam);
void liberar(int *x);

#endif // VETOR_H_INCLUDED
