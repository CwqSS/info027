#include <stdio.h>
#define TAM 6

int main()
{
    int matriz[TAM][TAM], vetor[TAM*TAM];
    int iCont, jCont, kCont;
    
    puts("Informe os valores da matriz:");
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            scanf("%d", &matriz[iCont][jCont]);
    
    kCont = 0;
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
        {
            vetor[kCont] = matriz[iCont][jCont];
            kCont++;
        }
    
    puts("Linearizando a matriz dada:");
    for(kCont = 0; kCont < TAM*TAM; kCont++)
        printf("%d ", vetor[kCont]);
}