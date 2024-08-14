#include <stdio.h>
#define TAM 20

// 65.  Faça  um  programa  em  C que  leia  um  array  de  20  inteiros  e  imprima  o  menor  e  o  maior 
// valor dentre os elementos do array, bem como suas respectivas posições.

int main()
{
    int vetor[TAM];
    int iCont, menor = 0, maior = 0;
    int posicaoMaior, posicaoMenor;

    printf("Informe os valores do vetor (%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor[iCont]);
    
    for(iCont = 0; iCont < TAM; iCont++)
        if (vetor[iCont] > maior)
        {
            maior = vetor[iCont];
            posicaoMaior = iCont;
        }
        else if (vetor[iCont] < menor)
        {
            menor = vetor[iCont];
            posicaoMenor = iCont;
        }

    printf("Maior valor|posição: %d|%d\nMenor valor|posição: %d|%d", maior, posicaoMaior, menor, posicaoMenor);
}