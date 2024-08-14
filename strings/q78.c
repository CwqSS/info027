#include <stdio.h>
#define TAM 256

int main()
{
    char text[TAM], character;
    int iCont, amount = 0;

    puts("Informe a string:");
    fgets(text, TAM, stdin);
    
    puts("Informe o carácter:");
    scanf(" %c", &character);

    for(iCont = 0; text[iCont] != '\0'; iCont++)
        if(text[iCont] == character)
            amount++;
    
    printf("O valor se repete: %d", amount);
}