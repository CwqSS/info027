#include <stdio.h>
#define TAM 5

int main()
{
    int matriz[TAM][TAM];
    int somaLinhas[TAM], somaColunas[TAM];
    int iCont, jCont;

    puts("Informe os valores da matriz A 5X5:");
    for(iCont = 0; iCont < TAM; iCont++)
    {
        printf("%d° Linha:\n", iCont + 1);
        for(jCont = 0; jCont < TAM; jCont++)
            scanf("%d", &matriz[iCont][jCont]);
    }

    for(iCont = 0; iCont < TAM; iCont++)
    {
        somaLinhas[iCont] = 0;
        somaColunas[iCont] = 0;
    }

    for(iCont = 0; iCont < TAM; iCont++)
    {
        for(jCont = 0; jCont < TAM; jCont++)
        {
            somaLinhas[iCont] += matriz[iCont][jCont];
            somaColunas[iCont] += matriz[jCont][iCont];
        }
    }

    for(iCont = 0; iCont < TAM; iCont++)
    {
        for(jCont = 0; jCont < TAM; jCont++)
            printf("%d\t", matriz[iCont][jCont]);
        printf("\n");
    }
    printf("Soma:\n");
    for(iCont = 0; iCont < TAM; iCont++)
    {
        printf("%d° Linha: %d, ", iCont + 1, somaLinhas[iCont]);
        printf("%d° Coluna: %d", iCont + 1, somaColunas[iCont]);
        printf("\n");
    }
}