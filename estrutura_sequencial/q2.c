#include <stdio.h>

// 2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo

int main()
{
    // entrada
    double lado;
    // saída
    double area, perimetro;

    printf("Informe o lado do quadrado: ");
    scanf("%lf", &lado);

    area = lado * lado;
    perimetro = 4 * lado;

    printf("Área: %.2f, perímetro: %.2f.", area, perimetro);
}
