#include "MeuMath.h"
#include <stdlib.h>

rgDados entrada() {
  rgDados result;

  printf("a: ");
  scanf("%d", &result.a);

  printf("b: ");
  scanf("%d", &result.b);

  printf("\n");

  return(result);
}

int soma(rgDados x) {
  return(x.a + x.b);
}

int sub(rgDados x) {
  return(x.a - x.b);
}

int mult(rgDados x) {
  return(x.a * x.b);
}

int divInt(rgDados x) {
  if (x.b == 0)
     return(0);
  else return(x.a / x.b);
}

float divReal(rgDados x) {
  if (x.b == 0)
     return(0.0);
  else return(x.a / (float)x.b);
}

char *toString(rgDados x) {
  char *result = (char *)malloc(250);

  sprintf(result, "%d + %d = %d\n"
                  "%d - %d = %d\n"
                  "%d x %d = %d\n"
                  "%d / %d = %d (divisao inteira)\n"
                  "%d / %d = %.2f (divisao real)\n",
                  x.a, x.b, soma(x),
                  x.a, x.b, sub(x),
                  x.a, x.b, mult(x),
                  x.a, x.b, divInt(x),
                  x.a, x.b, divReal(x));

  return(result);
}









