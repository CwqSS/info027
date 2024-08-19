#include <stdio.h>
#define COMUM 3
#define Linha 4
#define Coluna 2

int main()
{
    int matrizA[Linha][COMUM], matrizB[COMUM][Coluna];
    int matrizProduto[Linha][Coluna];
    int iCont, jCont, kCont, soma;

    puts("Informe os valores da primeira matriz:");
    for(iCont = 0; iCont < Linha; iCont++)
        for(jCont = 0; jCont < COMUM; jCont++)
            scanf("%d", &matrizA[iCont][jCont]);
    
    puts("Informe os valores da segunda matriz:");
    for(iCont = 0; iCont < COMUM; iCont++)
        for(jCont = 0; jCont < Coluna; jCont++)
            scanf("%d", &matrizB[iCont][jCont]);

    for(iCont = 0; iCont < Linha; iCont++)
    {
        for(jCont = 0; jCont < Coluna; jCont++)
        {
            soma = 0;
            for(kCont = 0; kCont < COMUM; kCont++)
            {
                soma += matrizA[iCont][kCont] * matrizB[kCont][jCont];
            }
                matrizProduto[iCont][jCont] = soma;
        }
    }

    puts("A matriz produto C = A*B é dada por:");
    for(iCont = 0; iCont < Linha; iCont++)
    {
        for(jCont = 0; jCont < Coluna; jCont++)
            printf("%d\t", matrizProduto[iCont][jCont]);
        printf("\n");
    }
}