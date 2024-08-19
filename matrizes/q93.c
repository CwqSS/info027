#include <stdio.h>
#define TAM 5

int main()
{
    int matriz[TAM][TAM];
    int iCont, jCont, kCont;
    int somaPrincipal = 0, somaSecundaria = 0;

    puts("Informe os valores da matriz:");
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            scanf("%d", &matriz[iCont][jCont]);
    
    for(iCont = 0; iCont < TAM; iCont++)
        somaPrincipal += matriz[iCont][iCont];
    
    for(iCont = 0, jCont = TAM - 1; iCont < TAM; iCont++, jCont--)
        somaSecundaria += matriz[iCont][jCont];
    
    printf("Soma principal: %d", somaPrincipal);
    printf("Soma secundária: %d", somaSecundaria);
}