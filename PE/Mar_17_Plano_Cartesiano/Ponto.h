#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

typedef struct {
  int x;    // coordenada "x"
  int y;    // coordenada "y"
} rgPonto;

rgPonto entrada();
char *posicao(rgPonto p);
char *toString(rgPonto p);

#endif // PONTO_H_INCLUDED
