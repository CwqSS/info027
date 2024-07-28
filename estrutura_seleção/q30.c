#include <stdio.h>

int main() 
{
    char tipo;
    float precoA = 1.90, precoG = 2.70, litros;
    float precoTotal, desconto;

    printf("Informe o tipo do combustível: ");
    scanf(" %c", &tipo);

    printf("Informe a quantidade de litros vendida: ");
    scanf("%f", &litros);

    if (tipo == 'A'){
        if (litros <= 25)
            desconto = 2 / 100.0;
        else
            desconto = 4 / 100.0;
        precoTotal = precoA * litros * (1 - desconto);
    }
    else if (tipo == 'G'){
        if (litros <= 25)
            desconto = 3 / 100.0;
        else
            desconto = 5 / 100.0;
        precoTotal = precoG * litros * (1 - desconto);
    }

    printf("O preço total a ser pago é: %.2f", precoTotal);
}