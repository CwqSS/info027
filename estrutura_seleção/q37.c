#include <stdio.h>

int main()
{
    int tipoPulverizacao;
    float descontoPreco = 0.1, descontoAcre = 0.05;
    float areaEmAcre, precoAcre, precoTotal, preco;
    // (1 acre == 4046,856 m²)

    printf("Informe o tipo da pulverização (1 a 4): ");
    scanf("%d", &tipoPulverizacao);
    printf("Informe area em acres: ");
    scanf("%f", &areaEmAcre);

    if (tipoPulverizacao == 1)
        precoAcre = 50;
    else if (tipoPulverizacao == 2)
        precoAcre = 100;
    else if (tipoPulverizacao == 3)
        precoAcre = 150;
    else if (tipoPulverizacao == 4)
        precoAcre = 250;

    precoTotal = precoAcre * areaEmAcre;

    if (areaEmAcre > 1000)
        precoTotal *= 1 - descontoAcre;
    if (precoTotal > 750)
    {
        preco = precoTotal - 750;
        precoTotal -= preco;
        preco *= 1 - descontoPreco;
        precoTotal += preco;
    }

    printf("Valor a ser pago: %.2f", precoTotal);
}   