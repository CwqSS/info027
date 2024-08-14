#include <stdio.h>
#define TAM 10

int main()
{
    int original[TAM], copy[TAM];
    int iCont;

    printf("Informe os valores do vetor (%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &original[iCont]);

    for(iCont = 0; iCont < TAM; iCont++)
        copy[iCont] = original[iCont];
    
    for(iCont = 0; iCont < TAM; iCont++)
        printf("%d | ", copy[iCont]);
}