#include <stdio.h>
#define TAM 100

int main()
{
    char palavra[TAM];
    int ehOrdenada = 1;
    int iCont;

    puts("Digite uma palavra e descubra se ela é ordenada ou não:");
    scanf("%s", palavra);

    for(iCont = 0; palavra[iCont]; iCont++)
        if(palavra[iCont] >= 'a' && palavra[iCont] <= 'z')
            palavra[iCont] = palavra[iCont] - 'a' + 'A';

    for(iCont = 1; palavra[iCont]; iCont++)
        if(palavra[iCont] < palavra[iCont - 1])
            ehOrdenada = 0;
    
    if(ehOrdenada)
        puts("A palavra é ordenada.");
    else
        puts("A palavra não é ordenada.");

}