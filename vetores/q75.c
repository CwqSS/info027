#include <stdio.h>
#define TAM 15

int main()
{
    int vetor[TAM] = {15, 14, 13, 10, 11, 9, 12, 7, 6, 8, 5, 1, 2, 4, 3};
    int iCont, kCont, aux;

    for(iCont = TAM - 1; iCont >= 1 ; iCont--)
    {
        for(kCont = 0; kCont < iCont; kCont++)
        {
            if(vetor[kCont] > vetor[kCont + 1])
            {
                aux = vetor[kCont + 1];
                vetor[kCont + 1] = vetor[kCont];
                vetor[kCont] = aux;
            }
        }
    }
    for(int jCont = 0; jCont < TAM; jCont++)
    {
        printf(" %d |", vetor[jCont]);
    }
}