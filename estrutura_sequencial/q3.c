#include <stdio.h>

// 3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.

int main()
{
    // constante
    const double pi = 3.14;
    // entrada
    double raio;
    // saída
    double area, perimetro;

    scanf("%lf", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("Área: %.2f, perímetro: %.2f.", area, perimetro);
}
