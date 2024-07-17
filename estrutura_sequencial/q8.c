#include <stdio.h>

//  8. Dado que a fórmula para conversão de Fahrenheit para
//  Celsius é C = 5/9 (F – 32), ler um valor de temperatura 
//  em Fahrenheit e exibi-lo em Celsius.

int main() 
{
    // entradas
    double F;
    // saídas
    double C;

    printf("Informe o valor da temperatura em Fahrenheit: ");
    scanf("%lf", &F);

    C = 5 / 9 * (F - 32);

    printf("Temperatura em graus Celsius: %.2f", C);
}
