#include <stdio.h>

int main()
{
    int valor;
    int dado1, dado2;
    
    printf("Informe o valor: ");
    scanf("%d", &valor);

    if (valor >= 2 && valor <= 12)
    {
        for (dado1 = 1; dado1 <= 6; dado1++)
            for (dado2 = 1; dado2 <= 6; dado2++)
                if (dado1 + dado2 == valor)
                    printf("%d %d\n", dado1, dado2);
    }
    else
        printf("Entrada inválida");
}