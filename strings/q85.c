#include <stdio.h>
#define TAM 512

// 85.  Escreva  um  programa  que  leia  uma  string  representando  um  número  hexadecimal  (base 
// 16) e imprima sua representação em decimal (base 10).

int main()
{
    char hexa[TAM], caracter;
    int iCont, jCont, base16 = 1, hexaCorreto = 1, aux, numero;
    int decimal = 0;

    puts("Informe o numero hexadecimal:");
    scanf("%s", hexa);

    for(iCont = 0; hexa[iCont]; iCont++);

    jCont = iCont - 1;

    for(jCont; jCont >= 0; jCont--)
    {
        aux = iCont - 1;
        caracter = hexa[jCont];
        if (caracter >= '0' && caracter <= '9')
        {
            numero =  caracter - 48;
        }
        else if(caracter >= 'a' && caracter <= 'f')
        {
            numero = caracter - 87;
        }
        else if (caracter >= 'A' && caracter <= 'F')
        {
            numero = caracter - 55;
        }
        else
        {
            hexaCorreto = 0;
        }
        
        while(aux > jCont)
        {
            base16 *= 16;
            aux -= 1;
        }
        decimal += numero * base16;
    }
    if(hexaCorreto)
        printf("O valor em decimal é: %d", decimal);
    else
        printf("O numero hexadecimal foi escrito incorretamente.");
}