#include <stdio.h>

// 18.  Escreva um programa que permute o valor de duas variáveis inteiras.

int main() 
{
    // entradas // saídas 
    int num1, aux, num2;

    printf("Primeira variável: A = ");
    scanf("%d", &num1);
    printf("Segunda variável: B = ");
    scanf("%d", &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("A = %d, B = %d.", num1, num2);
}
