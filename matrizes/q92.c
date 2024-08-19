#include <stdio.h>
#define TAM 5

int main()
{
    int matriz[TAM][TAM];
    int iCont, jCont, kCont;
    int ehSimetrica = 1;

    puts("Informe os valores da matriz:");
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            scanf("%d", &matriz[iCont][jCont]);

    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            if(matriz[iCont][jCont] != matriz[jCont][iCont])
                ehSimetrica = 0;

    if(ehSimetrica)
        puts("A matriz dada é simétrica.");
    else
        puts("A matriz dada não é simétrica.");
}