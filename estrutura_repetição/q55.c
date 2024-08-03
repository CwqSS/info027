#include <stdio.h>

// Números amigos

int main() 
{
    int number1, number2;
    int sum1 = 0, sum2 = 0;
    int divider1, divider2;
    int areFriends = 0;
    
    printf("Informe os números:\n");
    scanf("%d", &number1);
    scanf("%d", &number2);

    for(divider1 = 1; divider1 < number1; divider1++)  {
        if (number1 % divider1 == 0)
            sum1 += divider1;
    }

    for(divider2 = 1; divider2 < number2; divider2++)  {
        if (number2 % divider2 == 0)
            sum2 += divider2;
    }

    // A existência de uma variável areFriends é meia desnecessária nessa ocasião.
    if (sum1 == number2 && sum2 == number1)
        areFriends = 1;

    if (areFriends)
        printf("Os números são amigos!");
    else
        printf("Os números não são amigos!");
}