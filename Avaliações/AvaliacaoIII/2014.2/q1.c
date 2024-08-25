#include <stdio.h>
#define TAM 10

int main()
{
    int matriz[TAM][TAM];
    int iCont, jCont;
    int soma, ehMatrizPermutacao = 1;

    puts("Informe a matriz:");
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            scanf("%d", &matriz[iCont][jCont]);
    
    for(iCont = 0; iCont < TAM && ehMatrizPermutacao; iCont++)
    {
        soma = 0;
        for(jCont = 0; jCont < TAM; jCont++)
            soma += matriz[iCont][jCont] + matriz[jCont][iCont];
        if(soma != 2)
            ehMatrizPermutacao = 0;
    }

    puts("A matriz:");
    for(iCont = 0; iCont < TAM; iCont++)
    {
    for(jCont = 0; jCont < TAM; jCont++)
        printf("%d\t", matriz[iCont][jCont]);
    printf("\n");
    }

    if(ehMatrizPermutacao)
        puts("É uma matriz de permutação");
    else
        puts("Não é uma matriz de permutação");


}
