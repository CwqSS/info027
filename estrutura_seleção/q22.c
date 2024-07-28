#include <stdio.h>

// 22.  Escreva um programa que leia um número e exiba o seu módulo.

int main()
{
    // entrada
    double number;
    // saida
    double modulo;

    scanf("%lf", &number);

    if (number >= 0)
        modulo = number;
    else
        modulo = - number;

    printf("%f", modulo);
}