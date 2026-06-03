#ifndef MEUMATH_H_INCLUDED
#define MEUMATH_H_INCLUDED

typedef struct {
  int a;
  int b;
} rgDados;

rgDados entrada();
int soma(rgDados x);
int sub(rgDados x);
int mult(rgDados x);
int divInt(rgDados x);
float divReal(rgDados x);
char *toString(rgDados x);

#endif // MEUMATH_H_INCLUDED
