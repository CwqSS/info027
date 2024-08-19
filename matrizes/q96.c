#include <stdio.h>
#define linha 3
#define coluna 4

int main()
{
    int matrizA[linha][coluna], matrizB[linha][coluna];
    int matrizSoma[linha][coluna], matrizDiferenca[linha][coluna];
    int iCont, jCont, kCont;
    
    puts("Informe os valores da matriz A:");
    for(iCont = 0; iCont < linha; iCont++)
        for(jCont = 0; jCont < coluna; jCont++)
            scanf("%d", &matrizA[iCont][jCont]);
    printf("\n");
    
    puts("Informe os valores da matriz B:");
    for(iCont = 0; iCont < linha; iCont++)
        for(jCont = 0; jCont < coluna; jCont++)
            scanf("%d", &matrizB[iCont][jCont]);
    printf("\n");

    for(iCont = 0; iCont < linha; iCont++)
        for(jCont = 0; jCont < coluna; jCont++)
        {
            matrizSoma[iCont][jCont] = matrizA[iCont][jCont] + matrizB[iCont][jCont];
            matrizDiferenca[iCont][jCont] = matrizA[iCont][jCont] - matrizB[iCont][jCont];
        }
    
    puts("Esta foi a matriz A:");
    for(iCont = 0; iCont < linha; iCont++)
    {
        for(jCont = 0; jCont < coluna; jCont++)
            printf("%d ", matrizA[iCont][jCont]);
        printf("\n");
    }
    printf("\n");

    puts("Esta foi a matriz B:");
    for(iCont = 0; iCont < linha; iCont++)
    {
        for(jCont = 0; jCont < coluna; jCont++)
            printf("%d ", matrizB[iCont][jCont]);
        printf("\n");
    }
    printf("\n");

    puts("Esta foi a matriz Soma:");
    for(iCont = 0; iCont < linha; iCont++)
    {
        for(jCont = 0; jCont < coluna; jCont++)
            printf("%d ", matrizSoma[iCont][jCont]);
        printf("\n");
    }
    printf("\n");

    puts("Esta foi a matriz Diferença:");
    for(iCont = 0; iCont < linha; iCont++)
    {
        for(jCont = 0; jCont < coluna; jCont++)
            printf("%d ", matrizDiferenca[iCont][jCont]);
        printf("\n");
    }
    printf("\n");
}