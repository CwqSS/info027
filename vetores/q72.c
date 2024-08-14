#include <stdio.h>
#define TAM 10

int main()
{
    int vetor[TAM];
    int iCont;
    int inicio, meio, fim, posicao = -1;
    int numero;
    
    printf("Informe os valores do vetor ordenadamente(%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor[iCont]);
    
    printf("Informe qual número você deseja saber a posição: ");
    scanf("%d", &numero);

    inicio = 0;
    fim = TAM - 1;

    while(posicao == -1 && inicio <= fim)
    {
        meio = (fim + inicio) / 2;
        if (vetor[meio] > numero)
            fim = meio - 1;
        else if (vetor[meio] == numero)
            posicao = meio;
        else
            inicio = meio + 1;
    }

    printf("posição do elemento: %d", posicao);
    
}