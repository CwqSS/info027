#include <stdio.h>

// 41.  Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 100.

int main()
{
    int iCont;

    iCont = 1;
    while(iCont <= 100){
        printf("%d\n", iCont);
        iCont += 1;
    }

    // for(iCont = 1; iCont <= 100; iCont++)
    //      printf("%d\n", iCont);
}