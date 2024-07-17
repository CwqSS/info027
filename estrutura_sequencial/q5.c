#include <stdio.h>

// 5. Ler um número inteiro e exibir o seu sucessor

int main()
{
    // entrada
    int numero;
    // saída
    int sucessor;

    printf("Informe um número: ");
    scanf("%d", &numero);

    sucessor = numero + 1;

    printf("Seu sucessor é: %d", sucessor);
}