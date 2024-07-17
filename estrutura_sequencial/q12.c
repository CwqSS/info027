#include <stdio.h>

// 12.  Faça um algoritmo que transforme uma velocidade
//      fornecida em m/s pelo usuário para Km/h. Para tal, 
//      multiplique o valor em m/s por 3,6. 

int main()
{
    // entrada
    double metrosPorSegundo;
    // saida
    double KmPorHora;

    printf("Informe a velocidade em metros por segundo: ");
    scanf("%lf", &metrosPorSegundo);

    KmPorHora = metrosPorSegundo * 3.6;

    printf("A velocidade em kilômetros por hora é: %.2f", KmPorHora);
}
