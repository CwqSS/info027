#include <stdio.h>

// 23.  Escreva um programa que leia um número e imprima se este número é ou não par

int main()
{
    // entrada
    int number;
    
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("par");
    else
        printf("impar");
}