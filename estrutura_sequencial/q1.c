#include <stdio.h>

// 1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu
// perímetro.

int main() 
{
    // entrada
    float base, altura;
    // saída
    float area, perimetro;

    printf("Informe a base e a altura do retângulo:\n");

    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("Área: %.2f, perímetro: %.2f.", area, perimetro);
}
