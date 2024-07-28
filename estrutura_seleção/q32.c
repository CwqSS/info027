#include <stdio.h>

// 32.  Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número 
// ou um símbolo (qualquer outro caracter, que não uma letra ou número).

int main()
{
    char caracter;
    char tipoChar;

    printf("Escreva um carácter: ");
    scanf("%c", &caracter);
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||  
        caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
        tipoChar = 0;
       }
    else if ((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122))
        tipoChar = 1;
    else if (caracter >= 48 && caracter <= 57)
        tipoChar = 2;
    else 
        tipoChar = 3;


    // Este código, provavelmente, tem uma forma mais simples de ser feita.
    // Este switch case está aq somente por pura vontade.
    switch (tipoChar)
    {
    case 0:
        printf("Vogal");
        break;
    case 1:
        printf("Consoante");
        break;
    case 2:
        printf("Número");
        break;
    case 3:
        printf("Símbolo");
        break;
    default:
        printf("Algum erro ocorreu.");
        break;
    }
} 