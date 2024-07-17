#include <stdio.h>

// 16.  Escreva um programa para gerar o invertido de um número com três algarismos 
// (exemplo: o invertido de 498 é 894)

int main()
{
    // entradas
    int numero;
    // centena, dezena, unidade, auxiliar
    int c, d, u, aux;
    // saida
    int numInvertido;

    printf("Informe um número: ");
    scanf("%d", &numero);
    aux = numero;

    c = aux / 100; // 
    aux = aux % 100;
    d = aux / 10;
    u = aux % 10;

    numInvertido = u * 100 + d * 10 + c;

    printf("O seu número invertido é: %03d", numInvertido);
}