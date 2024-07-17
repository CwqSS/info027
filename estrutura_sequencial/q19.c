#include <stdio.h>

// 19.  Escreva um programa que calcule a raiz de uma equação do primeiro grau. 

int main()
{
    // entrada
    float a, b;
    // saida
    float x0;

    printf("f(x) = ax + b\n");
    
    printf("a = ");
    scanf("%f", &a);
    
    printf("b = ");
    scanf("%f", &b);
    
    x0 = - b / a;

    printf("A raiz da função f(x) = %.2fx + %.2f é igual a %.2f", a, b, x0);
}