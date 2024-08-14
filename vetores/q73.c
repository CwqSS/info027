#include <stdio.h>
#define TAM 20

// Dá para melhorar a verificação da moda.

int main()
{
    int vetor[TAM];
    int iCont, kCont, aux, qtd;  
    int existeModa = 0,moda, mediana;
    float media, soma = 0;

    // Leitura dos valores do vetor
    printf("Informe os valores do vetor(%d valores):\n", TAM);
    for(iCont = 0; iCont < TAM; iCont++)
        scanf("%d", &vetor[iCont]);

    // Ordenando o vetor por SELECTION SHORT
    for(iCont = 0; iCont < TAM - 1; iCont++)
        for(kCont = iCont + 1; kCont < TAM; kCont++)
            if (vetor[iCont] > vetor[kCont])
            {
                aux = vetor[iCont];
                vetor[iCont] = vetor[kCont];
                vetor[kCont] = aux;
            }

    // Pega o elemento que mais se repete
    // Entretanto, se tiver mais de uma moda, 
    // ele pega a moda de menor valor, pois aparece primeiro.
    for(iCont = 0, qtd = 0; iCont < TAM; iCont++)
    {
        aux = 0;
        for(kCont = iCont; kCont < TAM && vetor[iCont] == vetor[kCont]; kCont++)
        {
            if (vetor[iCont] == vetor[kCont])
            {
                aux++;
            }
            if (aux > qtd)
            {
                qtd = aux;
                moda = vetor[iCont];
                iCont = kCont;
                existeModa = 1;
            }
        }
    }
    // Se cada valor se repetir somente uma vez, 
    // Este programa afirmar não haver moda, mas
    // se os valores se repetirem, mesmo que em mesma quantidade, mais de uma vez, ent ele diz que há moda.

    // Verificando a mediana de forma genérica
    // para caso TAM seja alterado
    if (TAM % 2 == 0)
        mediana = (vetor[TAM / 2] + vetor[TAM / 2 - 1]) / 2;
    else
        mediana = vetor[TAM / 2];

    // Calculando a media
    for(iCont = 0; iCont < TAM; iCont++)
        soma += vetor[iCont];
    media = soma / TAM;

    if(existeModa)
        printf("a. Moda: %d\n", moda);
    else
        printf("a. Moda: Não há\n");
    printf("b. Mediana: %d\n", mediana);
    printf("c. Média: %.3f", media);
}
