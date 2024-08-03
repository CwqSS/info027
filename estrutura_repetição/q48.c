#include <stdio.h>

// 48.  Escreva  um  programa  que  determine  se  um  dado  número  N  (digitado  pelo  usuário)  é 
// primo ou não

int main()
{
    int N, iCont, qtdDivisores;

    printf("Informe um número: ");
    scanf("%d", &N);

    for(iCont = 1, qtdDivisores = 1; iCont < N && qtdDivisores <= 2; iCont ++)
        if (N % iCont == 0)
            qtdDivisores += 1;
    
    if (qtdDivisores == 2)
        printf("É primo.");
    else
        printf("Não é primo.");

}