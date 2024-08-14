#include <stdio.h>
#define TAM 10

int main()
{
    float vetor1[TAM], vetor2[TAM];
    float vetorSoma[TAM];
    int iCont;

    printf("Informe os valores do vetor 1 (%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont ++)
        scanf("%f", &vetor1[iCont]);

    printf("Informe os valores do vetor 2 (10 valores):\n");
    for(iCont = 0; iCont < TAM; iCont ++)
        scanf("%f", &vetor2[iCont]);

    for(iCont = 0; iCont < TAM; iCont ++)
        vetorSoma[iCont] = vetor1[iCont] + vetor2[iCont];

    printf("A soma dos vetores resulta em:\n");
    for(iCont = 0; iCont < TAM; iCont ++)
        printf("%.2f | ", vetorSoma[iCont]);
}