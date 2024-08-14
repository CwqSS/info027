#include <stdio.h>
#define TAM 255

// Deve haver um jeito mais fácil de fazer isso aqui

int main()
{
    char text[TAM], newText[TAM];
    int iCont, kCont; 
    int amountSpace = 0, firstCharPosition = -1;

    puts("Informe a string:");
    fgets(text, TAM, stdin);

    // Descobre onde começa a aparecer caracteres != de espaço
    for(iCont= 0; iCont < TAM && firstCharPosition == -1; iCont++)
        if(firstCharPosition == -1 && text[iCont] != 32)
            firstCharPosition = iCont--;

    // Se o primeiro caracter aparecer em posição diferente de 0, puxa todo o texto para o inicio
    if(firstCharPosition != 0)
    {
        for(kCont = 0; kCont < TAM && text[iCont-1] != '\0'; kCont++, iCont++)
        {
            text[kCont] = text[iCont];
        }
    }
    
    // Normaliza a string
    for(iCont = 0, kCont = 0; iCont < TAM && text[iCont] != '\0'; iCont++)
    {
        if(text[iCont] == 32)
        {
            amountSpace += 1;
            if(amountSpace <= 1)
            {
                newText[kCont] = text[iCont];
                kCont++;   
            }
        }
        else if (text[iCont] != 32)
        {
            newText[kCont] = text[iCont];
            amountSpace = 0;
            kCont++;
        }
    }
    newText[kCont] = '\0';

    puts(newText);
}