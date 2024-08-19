#include <stdio.h>
#define TAM 5

int main()
{
    int matriz[TAM][TAM], aux[TAM];
    int iCont, jCont, kCont;
    int x, y;

    puts("Informe os valores da matriz:");
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            scanf("%d", &matriz[iCont][jCont]);

    puts("Informe os valores x e y:");
    scanf("%d %d", &x, &y);
    x -= 1;
    y -= 1;
    
    for(jCont = 0; jCont < TAM; jCont++)
    {
        aux[jCont] = matriz[x][jCont];
        matriz[x][jCont] = matriz[y][jCont];
        matriz[y][jCont] = aux[jCont];
    }

    for(iCont = 0; iCont < TAM; iCont++)
    {
        aux[iCont] = matriz[iCont][x];
        matriz[iCont][x] = matriz[iCont][y];
        matriz[iCont][y] = aux[iCont];
    }

    for(iCont = 0, jCont = TAM - 1; iCont < TAM; iCont++, jCont--)
    {
        aux[iCont] = matriz[iCont][iCont];
        matriz[iCont][iCont] = matriz[iCont][jCont];
        matriz[iCont][jCont] = aux[iCont];
    }

    puts("-------------------------------");
    for(iCont = 0; iCont < TAM; iCont++)
    {
        for(jCont = 0; jCont < TAM; jCont++)
            printf("%d\t", matriz[iCont][jCont]);
        printf("\n");
    }
    puts("-------------------------------");
}