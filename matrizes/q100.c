#include <stdio.h>
#define N 4

int main()
{
    int matriz[N][N];
    int progressaoAritmetica = 0;
    int somaGrade = 0, ehQuadradoLatino = 1;
    int iCont, jCont;

    progressaoAritmetica = N * (N + 1) / 2;

    printf("Informe a matriz de ordem %d:\n", N);
    for(iCont = 0; iCont < N; iCont++)
        for(jCont = 0; jCont < N; jCont++)
            scanf("%d", &matriz[iCont][jCont]);
    
    for(iCont = 0; iCont < N && ehQuadradoLatino; iCont++)
    {
        somaGrade = 0;
        for(jCont = 0; jCont < N && ehQuadradoLatino; jCont++)
        {
            somaGrade += matriz[iCont][jCont];
        }
    }
    if(somaGrade != progressaoAritmetica)
        ehQuadradoLatino = 0;
    
    for(jCont = 0; jCont < N && ehQuadradoLatino; jCont++)
    {
        somaGrade = 0;
        for(iCont = 0; iCont < N && ehQuadradoLatino; iCont++)
        {
            somaGrade += matriz[iCont][jCont];
        }
    }
    
    if(somaGrade != progressaoAritmetica)
        ehQuadradoLatino = 0;

    for(iCont = 0; iCont < N; iCont++)
    {
        for(jCont = 0; jCont < N; jCont++)
            printf("%d \t", matriz[iCont][jCont]);
        printf("\n");
    }

    if(ehQuadradoLatino)
        puts("A matriz é um quadrado latino.");
    else    
        puts("A matriz não é um quadrado latino.");
}
