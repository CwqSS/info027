#include <stdio.h>

// 28.  Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante

void main()
{
    char letra;
    int VOGAL = 0;
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||  letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        VOGAL = 1;
        
    if (VOGAL)
        printf("Vogal");
    else
        printf("Consoante");
}