#include <stdio.h>
#define N 3

int main()
{
    int matriz[N][N];
    int ehQuadradoLatino = 1, iCont, jCont;
    int kCont, aux;
    
    puts("Informe a matriz:");
    for(iCont = 0; iCont < N; iCont++)
        for(jCont = 0; jCont < N; jCont++)
            scanf("%d", &matriz[iCont][jCont]);

    for(iCont = 0; iCont < N; iCont++)
        for(jCont = 0; jCont < N - 1; jCont++)
        {
            for(kCont = jCont + 1; kCont < N; kCont++)
                if(matriz[iCont][jCont] > matriz[iCont][kCont])
                {
                    aux = matriz[iCont][jCont];
                    matriz[iCont][jCont] = matriz[iCont][kCont];
                    matriz[iCont][kCont] = aux;
                }
        } 
    
    for(iCont = 0; iCont < N && ehQuadradoLatino; iCont++)
    {
        kCont = 1;
        for(jCont = 0; jCont < N && ehQuadradoLatino; jCont++)
        {
            if(matriz[iCont][jCont] != kCont)
                ehQuadradoLatino = 0;
            else
                kCont++;
        }
    }
    
    if(ehQuadradoLatino)
        puts("A matriz é um quadrado latino");
    else
        puts("A matriz não é um quadrado latino");
}