#include <stdio.h>
#define TAM 6

int main()
{
    int matriz[TAM][TAM], fator;
    int iCont, jCont;

    puts("Informe os valores da matriz:");
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            scanf("%d", &matriz[iCont][jCont]);
    
    puts("Informe o valor do fator:");
    scanf("%d", &fator);

    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            matriz[iCont][jCont] *= fator;

    puts("O resultado da multiplicação é:");
    for(iCont = 0; iCont < TAM; iCont++)
    {
        for(jCont = 0; jCont < TAM; jCont++)
            printf("%d\t", matriz[iCont][jCont]);
        printf("\n");
    }
    

}