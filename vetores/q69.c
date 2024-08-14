#include <stdio.h>
#define TAM 15

void main()
{
    int vetor[TAM] = {0, 1000, 500, 250, 300, 450, 999, 998, 999, 500, 500, 500, 1000, 0, 0};
    int valor, quantidadesDeValor, iCont;

    printf("Informe o valor e descubra quantas vezes ele se repete no vetor: ");
    scanf("%d", &valor);

    for(iCont = 0; iCont < TAM; iCont++)
        if (vetor[iCont] == valor)
            quantidadesDeValor++;

    printf("O valor se repete %d vezes.", quantidadesDeValor);
}
