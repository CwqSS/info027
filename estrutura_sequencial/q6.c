#include <stdio.h>

// 6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.

int main() 
{
    // entradas
    int num1, num2;
    // saidas
    int quociente, resto;

    printf("Informe dois números:\n");

    printf("n1: ");
    scanf("%d", &num1);
    printf("n2: ");
    scanf("%d", &num2);

    quociente = num1 / num2;
    // "%" é uma operação que informa-nos o resto da divisão inteira
    resto = num1 % num2;

    printf("Quociente: %d, resto: %d.", quociente, resto);
}
