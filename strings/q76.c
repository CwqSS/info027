#include <stdio.h>
#define TAM 100
void main()
{
    char text[TAM];
    int iCont, qtdVogal = 0;

    fgets(text, TAM, stdin);

    for(iCont = 0; iCont < TAM - 1 && text[iCont] != '\0'; iCont++)
    {
        if (text[iCont] == 'A' || text[iCont] == 'A' + 32 || text[iCont] == 'E' || text[iCont] == 'E' + 32 || text[iCont] == 'I' || text[iCont] == 'I' + 32 || text[iCont] == 'O' || text[iCont] == 'O' + 32 || text[iCont] == 'U' || text[iCont] == 'U' + 32) 
            qtdVogal += 1;
    }

    printf("A quantidade de vogais na string é: %d", qtdVogal);
}