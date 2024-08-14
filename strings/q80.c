#include <stdio.h>
#define TAM 201

// Lembrar que a função fgets()
// ao receber uma quantidade menor de caracteres que
// o estipulado, lê o \n tbm.

int main()
{
    char textOne[TAM], textTwo[TAM];
    int sizeTextTwo, sCont, iCont;

    puts("Informe a primeira string:");
    fgets(textOne, TAM, stdin);

    puts("Informe a segunda string:");
    fgets(textTwo, TAM, stdin);

    for(iCont = 0; iCont < TAM && textTwo[iCont] != '\0' &&  textTwo[iCont] != '\n'; iCont++);

    sizeTextTwo = iCont;

    for(sCont = 0, iCont = 0; iCont < TAM && sCont < sizeTextTwo; iCont++)
    {
        if(textOne[iCont] == textTwo[sCont])
        {
            sCont += 1;
        }
        else
        {
            sCont = 0;
        }
    }
    
    if(sizeTextTwo == sCont)
        puts("A primeira string contém a segunda");
    else
        puts("A primeira string não contém a segunda");
}
