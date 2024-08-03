#include <stdio.h>

// 45.  Escreva um programa que leia 5 números, e imprima a média entre eles

int main()
{
    float num, soma, media;
    int iCont;

    for(iCont = 0, soma = 0; iCont < 5; iCont++){
        scanf("%f", &num);
        soma += num;
    }
    media = soma / iCont;

    printf("%.2f", media);
}