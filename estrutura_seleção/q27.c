#include <stdio.h>

// 27.  Escreva  um  programa  que  leia  3  números  e  calcule  a  média  ponderada  entre  eles. 
// Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.

void main () 
{
    // entradas
    float num1, num2, num3;
    float maior, menores;
    float peso1 = 5, peso2 = 2.5;
    float mediaPonderada = 0;

    printf("Informe os três valores:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3){
        maior = num1;
        menores = num2 + num3;
    }
    else if (num2 >= num1 && num2 >= num3){
        maior = num2;
        menores = num1 + num3;
    }
    else {
        maior = num3;
        menores = num1 + num2;
    }

    mediaPonderada = maior * peso1 + menores * peso2;
    mediaPonderada /= peso1 + peso2 * 2;

    printf("A média ponderada é: %.2f", mediaPonderada);
}