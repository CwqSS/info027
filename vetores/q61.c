#include <stdio.h>
#define TAM 20
// 61.  Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 
// para  cada  elemento.  Imprima  o  vetor  em  seguida,  indicando  a  posição  e  o  valor  na 
// posição (um por linha).

int main()
{
    int vetor[TAM];
    int iCont;

    for(iCont = 0; iCont < TAM; iCont++)
        vetor[iCont] = 0;

    printf("Posição - Valor\n");
    for(iCont = 0; iCont < TAM; iCont++)
        printf("%d - %d\n", iCont, vetor[iCont]);
}