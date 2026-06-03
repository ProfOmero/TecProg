#include <stdio.h>
#include "Ponto.h"

int main()
{
    int i, n;

    printf("Quantos pontos serao informados? ");
    scanf("%d", &n);

    printf("\n");

    rgPonto meusPontos[n];

    for(i=0; i<n; i++) {
      printf("%do. ponto\n", (i+1));
      meusPontos[i] = entrada();
    }

    for(i=0; i<n; i++) {
      printf("%s", toString(meusPontos[i]));
    }

    return 0;
}
