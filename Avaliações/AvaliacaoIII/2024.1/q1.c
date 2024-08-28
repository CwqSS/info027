#include <stdio.h>
#define TAM 5
int main()
{
    int folha[TAM][TAM];
    int altura, alturaDoCorte;
    int iCont, jCont, novoPedaco, aux, qtdPedacos = 1;

    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            folha[iCont][jCont] = 0;
            
    printf("Informe as alturas dos retângulos (%d alturas):\n", TAM);
    for(jCont = 0; jCont < TAM; jCont++)
    {
        scanf("%d", &altura);
        for(iCont = 0; iCont < altura; iCont++)
            folha[iCont][jCont] = 1;
    }
    
    puts("Sua folha é:");
    puts("--------------------------------------------------");
    for(iCont = 0; iCont < TAM; iCont++)
    {
        for(jCont = 0; jCont < TAM; jCont++)
            printf("%d\t", folha[iCont][jCont]);
        printf("\n");
    }
    puts("--------------------------------------------------");
    puts("");
    
    for(iCont = 0; iCont < TAM; iCont++)
    {
        aux = novoPedaco = 1;
        for(jCont = 0; jCont < TAM; jCont++)
        {
            if(folha[iCont][jCont] && novoPedaco)
            {
                aux += 1;
                novoPedaco = 0;
            }
            else if(!folha[iCont][jCont])
                novoPedaco = 1;
        }
        if(aux > qtdPedacos)
        {
            qtdPedacos = aux;
            alturaDoCorte = iCont;
        }
    }
    
    printf("A altura do corte: %d\n", alturaDoCorte);
    printf("Resulta na maior quantidade de partes: %d.", qtdPedacos);
}