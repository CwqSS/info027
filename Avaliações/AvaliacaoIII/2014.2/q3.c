#include <stdio.h>
#define TAM_LINHAS 100
#define TAM 256

int main()
{
    char nome[TAM_LINHAS][TAM];
    float preco[TAM_LINHAS];
    float soma = 0, media, menorValor;
    int iCont, posicao = 0;

    // O único problema é que aqui não tem como colocar espaço no nome.
    for(iCont = 0; iCont < TAM_LINHAS; iCont++)
    {
        puts("Informe o nome do produto:");
        scanf("%s", nome[iCont]);
        puts("Informe o preço do produto:");
        scanf("%f", &preco[iCont]);
    }

    for(iCont = 0; iCont < TAM_LINHAS; iCont++)
        soma += preco[iCont];
    media = soma / TAM_LINHAS;

    for(iCont = 0; iCont < TAM_LINHAS; iCont++)
        if(preco[iCont] < media)
            preco[iCont] *= 1.1;
    
    menorValor =  preco[posicao];
    for(iCont = 0; iCont < TAM_LINHAS; iCont++)
        if(preco[iCont] < menorValor)
        {
            menorValor = preco[iCont];
            posicao = iCont;
        }

    printf("O produto mais barato após a majoração é:\n");
    printf("Nome: %s,\nPreço: R$ %.2f", nome[posicao], preco[posicao]);
}