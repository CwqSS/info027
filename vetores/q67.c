#include <stdio.h>
#define TAM 10

int main()
{
    int vetor1[TAM], vetor2[TAM];
    int vetor3[TAM], iCont;

    printf("Informe os valores do vetor 1 (%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor1[iCont]);

    printf("Informe os valores do vetor 2 (%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor2[iCont]);

    for(iCont = 0; iCont < TAM; iCont++)
    {
        if(vetor1[iCont] >= vetor2[iCont])
            vetor3[iCont] = vetor1[iCont];
        else 
            vetor3[iCont] = vetor2[iCont];
    }

    for(iCont = 0; iCont < TAM; iCont++)
        printf("%d | ", vetor3[iCont]);
}