#include <stdio.h>

// número perfeito

int main()
{
    int number, divider, sum = 0, isPerfect = 0;

    printf("Informe um número e veja se ele é perfeito: ");
    scanf("%d", &number);

    for(divider =1; divider < number; divider++){
        if (number % divider == 0)
        {
            sum += divider;
        }
    }

    if (sum == number)
        isPerfect = 1;

    if (isPerfect)
        printf("Esse número é perfeito.");
    else
        printf("Esse número não é perfeito.");
}