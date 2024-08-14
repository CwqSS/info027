#include <stdio.h>
#define TAM 20

int main()
{
    int vetor[TAM];
    int iCont, menor = 0, maior = 0;

    printf("Informe os valores do vetor (%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor[iCont]);
    
    for(iCont = 0; iCont < TAM; iCont++)
        if (vetor[iCont] > maior)
            maior = vetor[iCont];
        else if (vetor[iCont] < menor)
            menor = vetor[iCont];

    printf("Maior valor: %d\nMenor valor: %d", maior, menor);
}