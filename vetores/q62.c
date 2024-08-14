#include <stdio.h>
#define TAM 10
// 62.  Faça um programa em C que leia um array de 10 posições e conte quantos números pares 
// são elementos do array. Imprima esta quantidade.

int main()
{
    int vetor[TAM];
    int iCont, qtdPares = 0;

    printf("Informe os valores:\n");
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor[iCont]);
    
    for(iCont = 0; iCont < TAM; iCont++)
        if (vetor[iCont] % 2 == 0)
            qtdPares++;
    
    printf("A quantidade de pares no vetor é: %d", qtdPares);
}