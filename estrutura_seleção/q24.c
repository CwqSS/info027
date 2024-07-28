#include <stdio.h>

// 24.  Escreva um programa que leia três números e mostre o maior entre eles.

int main()
{
    // entradas
    float num1, num2, num3;
    // saída
    float maior;

    printf("Número 1: ");
    scanf("%f", &num1);
    printf("Número 2: ");
    scanf("%f", &num2);
    printf("Número 3: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3)
        maior = num1;
    else if (num2 >= num1 && num2 >= num3)
        maior = num2;
    else
        maior = num3;
    
    printf("maior: %f", maior);

}