#include <stdio.h>

// 7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

int main()
{
    // entrada
    int diasDeIdade;
    // auxiliar (usado para efetuar os cálculos e para não perdermos o valor original)
    int aux;
    // saída
    int anos, meses, dias;

    printf("Informe sua idade em dias: ");
    scanf("%d", &diasDeIdade);
    aux = diasDeIdade;

    // anos
    anos = aux / 365;
    aux = aux % 365;
    // meses
    meses = aux / 30;
    aux = aux % 30;
    // dias
    dias = aux;

    printf("Os seus %d dias de vida equivalem a:\n", diasDeIdade);
    printf("%d anos, %d meses e %d dias de vida.", anos, meses, dias);
}
