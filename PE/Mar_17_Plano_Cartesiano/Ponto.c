#include "Ponto.h"
#include <stdlib.h>

rgPonto entrada() {
  rgPonto result;

  printf("coordenada 'x': ");
  scanf("%d", &result.x);

  printf("coordenada 'y': ");
  scanf("%d", &result.y);

  printf("\n");

  return(result);
}

char *posicao(rgPonto p) {
  if ((p.x > 0) && (p.y > 0))
     return("Q1");
  else if ((p.x < 0) && (p.y > 0))
     return("Q2");
  else if ((p.x < 0) && (p.y < 0))
     return("Q3");
  else if ((p.x > 0) && (p.y < 0))
     return("Q4");
  else if ((p.x != 0) && (p.y == 0))
     return("eixo x");
  else if ((p.x == 0) && (p.y != 0))
     return("eixo y");
  else return("origem");
}

char *toString(rgPonto p) {
  char *result = (char *)malloc(100);

  sprintf(result, "(x: %d; y: %d) %s\n",
            p.x, p.y, posicao(p));

  return(result);
}





