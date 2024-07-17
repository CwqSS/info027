#include <stdio.h>

// 10.  Converter um inteiro informado menor que 32 
// para sua representação em binário

int main()
{
    // entrada
    int numero;
    // variáveis auxiliares
    int aux, base10 = 1, resto;
    // saída
    int binario = 0;
    
    printf("Informe um número natural menor que 32: ");
    scanf("%d", &numero);
    aux = numero;

    resto = aux % 2 * base10;
    binario += resto;
    aux /= 2;
    base10 *= 10;

    resto = aux % 2 * base10;
    binario += resto;
    aux /= 2;
    base10 *= 10;

    resto = aux % 2 * base10;
    binario += resto;
    aux /= 2;
    base10 *= 10;

    resto = aux % 2 * base10;
    binario += resto;
    aux /= 2;
    base10 *= 10;

    resto = aux % 2 * base10;
    binario += resto;
    aux /= 2;
    base10 *= 10;
   
    printf("%d(10) = %05d(2)", numero, binario);  
}
