#include <stdio.h>
#include "MeuMath.h"

int main()
{
    rgDados meusDados;

    meusDados = entrada();
    printf("%s", toString(meusDados));

    return 0;
}
