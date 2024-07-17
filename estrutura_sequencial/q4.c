#include <stdio.h>

// 4. Dado os três lados de um triângulo determinar o perímetro do mesmo.

int main()
{
    
    // entrada 
    double ladoA, ladoB, ladoC;
    // saída
    double perimetro;

    printf("Informe os três lados do triângulo: ");

    printf("Lado A: ");
    scanf("%lf", &ladoA);

    printf("Lado B: ");
    scanf("%lf", &ladoB);

    printf("Lado C: ");
    scanf("%lf", &ladoC);

    perimetro = ladoA + ladoB + ladoC;

    printf("Perímetro: %f;", perimetro);
}
