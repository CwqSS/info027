#include <stdio.h>

// 9. Faça um algoritmo que calcule e apresente o valor do volume de 
// uma lata de óleo, dado seu raio e sua altura.

int main() 
{
    // constante
    const double pi = 3.14;
    // entradas
    double raio, altura;
    // saídas
    double volume;

    printf("Informe o raio e a altura em metros: \n");
    scanf("%lf", &raio);
    scanf("%lf", &altura);

    volume = (pi * raio * raio) * altura;

    // Como eu pedi as medidas em metros, devo multiplicar por 1000
    volume = volume * 1000;

    printf("O valor do volume da lata é: %.2fL", volume);
}
