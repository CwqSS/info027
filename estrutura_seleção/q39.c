#include <stdio.h>

int main()
{
    int numeroAgencia;
    int aux, m, c, d, u;
    int soma = 0;
    int dv;

    printf("Informe o número da agência: ");
    scanf("%d", &numeroAgencia);
    aux = numeroAgencia;

    m = aux / 1000;
    aux %= 1000;

    c = aux / 100;
    aux %= 100;

    d = aux / 10;
    aux %= 10;

    u = aux;

    soma += m * 5 + c * 4 + d * 3 + u * 2;

    dv = 11 - (soma % 11);

    if (dv != 10)
        printf("%d-%d", numeroAgencia, dv);
    else
        printf("%d-X", numeroAgencia);
    
}