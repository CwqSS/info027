#include <stdio.h>
#define TAM 512

int main()
{
    char texto1[TAM], texto2[TAM];
    int iCont, kCont, saoIguais = 1;

    puts("Informe a primeira string:");
    fgets(texto1, TAM, stdin);

    puts("Informe a segunda string:");
    fgets(texto2, TAM, stdin);

    for(iCont = 0; texto1[iCont]; iCont++)
        if(texto1[iCont] >= 'a' && texto1[iCont] <= 'z')
            texto1[iCont] = 'A' + texto1[iCont] - 'a';

    for(iCont = 0; texto2[iCont]; iCont++)
        if(texto2[iCont] >= 'a' && texto2[iCont] <= 'z')
            texto2[iCont] = 'A' + texto2[iCont] - 'a';
    
    for(kCont = 0; texto1[kCont] || texto2[kCont]; kCont++)
        if(texto1[kCont] != texto2[kCont])
            saoIguais = 0;
    
    if(saoIguais)
        puts("As strings são iguais!");
    else
        puts("As strings não são iguais.");

}