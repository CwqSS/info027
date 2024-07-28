#include <stdio.h>

// 26.  Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores

int main()
{
    // entradas
    float num1, num2, num3;
    // processamento
    float maior1, maior2;
    // saida
    float soma = 0;

    printf("Informe três valores:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3){
        maior1 = num1;
        if (num2 >= num3){
            maior2 = num2;
        }
        else{
            maior2 = num3;
        }
    }
    else if (num2 >= num3){
        maior1 = num2;
        if (num1 >= num3){
            maior2 = num1;
        }
        else{
            maior2 = num3;
        }
    }
    else {
        maior1 = num3;
        if (num1 >= num2){
            maior2 = num1;
        }
        else {
            maior2 = num2;
        }
    }

    soma += maior1 + maior2;

    printf("A soma dos dois maiores é: %.2f", soma);
}       