#include <stdio.h>
#define TAM 201

int main()
{
    int start, end = -1, iCont, kCont, isValid = 0;
    char text[TAM], subText[TAM];

    fgets(text, TAM, stdin);

    for(iCont = 0; iCont < TAM && text[iCont] != '\0'; iCont++);

    printf("Informe o início e o final da substring(os valores devem estar na faixa de 0 a %d): ", iCont);
    scanf("%d %d", &start, &end);

    for(kCont = start, iCont = 0; kCont <= end; kCont++, iCont++)
    {
        subText[iCont] = text[kCont];
    }
    subText[kCont+1] = text[iCont+1];

    puts(subText);
}