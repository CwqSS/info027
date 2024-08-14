#include <stdio.h>
#define TAM 100

int main()
{
    char text[TAM];
    char invertedText[TAM];
    int iCont, kCont = -1;

    puts("Informe a string:");
    fgets(text, TAM, stdin);

    for(iCont = 0; iCont < TAM && kCont == -1; iCont++)
        if(text[iCont] == '\0')
        {
            kCont = iCont - 1;
            invertedText[iCont] = '\0';
        }

    for(iCont = 0; iCont < TAM && kCont >= 0; iCont++)
    {
        invertedText[iCont] = text[kCont];
        kCont--;
    }
    
    puts(invertedText);
}