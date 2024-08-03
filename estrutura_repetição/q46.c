#include <stdio.h>

// 46.  Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e 
// positivos),  ou  seja,  A  /  B,  através  de  subtrações  sucessivas.  Esses  dois  valores  são 
// passados pelo usuário através do teclado.

int main()
{
    int A, B, quociente, resto, validacao = 0;;

    printf("Informe o valor do dividendo: ");
    scanf("%d", &A);

    printf("Informe o valor do divisor: ");
    scanf("%d", &B);

    if (A > 0 && B > 0)
    {
        resto = A;
        quociente = 0;
        while(resto - B >= 0)
        {
            resto -= B;
            quociente += 1;
        }
        
        validacao = 1;
    }

    if (validacao)
        printf("Quociente: %d", quociente);
    else
        printf("Erro. Alguma entrada inválida.");

}