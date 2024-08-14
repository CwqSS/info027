#include <stdio.h>
#define TAM 512



int main()
{
    char romano[TAM], caracter, proxCaracter;
    int iCont, jCont, numero, proxNumero, decimal = 0, existe = 1;

    puts("(I, V, X, L, C, D, M)");
    puts("Informe o número romano:");
    scanf("%s", romano);
    
    for(iCont = 0; romano[iCont] && existe; iCont++)
    {
        caracter = romano[iCont];
        proxCaracter = romano[iCont+1];
        
        if (caracter == 'I')
        {
            numero = 1;
        }
        else if(caracter == 'V')
        {
            numero = 5;
        }
        else if (caracter == 'X')
        {
            numero = 10;
        }
        else if(caracter == 'L')
        {
            numero = 50;
        }
        else if(caracter == 'C')
        {
            numero = 100;
        }
        else if(caracter == 'D')
        {
            numero = 500;
        }
        else if (caracter == 'M')
        {
            numero = 1000;
        }
        else if(caracter != '\0')
        {
            existe = 0;
        }

        ////////////////////////////////

        if (proxCaracter == 'I')
        {
            proxNumero = 1;
        }
        else if(proxCaracter == 'V')
        {
            proxNumero = 5;
        }
        else if (proxCaracter == 'X')
        {
            proxNumero = 10;
        }
        else if(proxCaracter == 'L')
        {
            proxNumero = 50;
        }
        else if(proxCaracter == 'C')
        {
            proxNumero = 100;
        }
        else if(proxCaracter == 'D')
        {
            proxNumero = 500;
        }
        else if (proxCaracter == 'M')
        {
            proxNumero = 1000;
        }
        else if (caracter == '\0')
        {
            proxNumero = 0;
        }
        else
            existe = 0;

        /////////////////////////

        if(numero >= proxNumero)
            decimal += numero;
        else
            decimal -= numero;
    }
    if(existe)
        printf("O romano em decimal é: %d", decimal);
    else 
        printf("O número não foi escrito corretamente.");
}