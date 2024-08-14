#include <stdio.h>
#define TAM 10

int main()
{
    int vetor[TAM], numero;
    int iCont, pos = -1;

    printf("Informe os valores do vetor (%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor[iCont]);

    printf("Informe o valor pelo qual você deseja saber a posição (Se ele não existir, -1 será retornado): ");
    scanf("%d", &numero);

    for(iCont = 0; iCont < TAM && pos == -1; iCont++)
        if (vetor[iCont] == numero)
            pos = iCont;

    printf("posição: %d", pos);
}