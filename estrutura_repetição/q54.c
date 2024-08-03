#include <stdio.h>

// 54.  Construa um programa que receba um número e verifique se ele é um número triangular. 
// (Um  número  é  triangular  quando  é  resultado  do  produto  de  três  números  consecutivos. 
// Exemplo: 24 = 2 x 3 x 4)

int main() 
{
    int number, resultado, divisor;
    int ehTriangular = 0;

    printf("Informe um número: ");
    scanf("%d", &number);

    for(divisor = 1; divisor < number && ehTriangular == 0; divisor++)
    {
        resultado = divisor * (divisor + 1) * (divisor + 2); 
        if (resultado == number)
            ehTriangular = 1;
    }

    if (ehTriangular)
        printf("É triangular");
    else
        printf("Não é triangular");
}