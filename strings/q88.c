#include <stdio.h>
#define TAM 512
// 88.  Escreva um programa em C, que coloque a string lida toda em caixa alta.

int main()
{
    char texto[TAM];
    int iCont;

    fgets(texto, TAM, stdin);

    for(iCont = 0; texto[iCont]; iCont++)
        if(texto[iCont] >= 'a' && texto[iCont] <= 'z')
            texto[iCont] = 'A' + texto[iCont] - 'a';

    puts(texto);
}