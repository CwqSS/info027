#include <stdio.h>

// 21.  Escreva um programa que leia um número e exiba se ele é positivo ou negativo.

int main()
{
    // input
    double number;

    scanf("%lf", &number);

    if (number > 0)
        printf("positivo");
    else if (number < 0)
        printf("negativo");
    else
        printf("nulo");
}