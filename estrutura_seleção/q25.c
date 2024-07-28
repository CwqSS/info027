#include <stdio.h>

// 5.  Escreva  um  programa  que  leia  o  número  equivalente  ao  mês  e  imprima  a  quantidade  de 
// dias deste mês

int main()
{
    // entradas
    int numMes;
    // saida
    int qtdDias;

    scanf("%d", &numMes);

    if (numMes == 1  || numMes == 3|| numMes == 5 || numMes == 7 || numMes == 8 || numMes == 10 || numMes == 12)
        qtdDias = 31;
    else if (numMes == 4 || numMes == 6 || numMes == 9 || numMes == 11)
        qtdDias = 30;
    else
        qtdDias = 28;

    printf("Quantidade de dias do mês: %d", qtdDias);

}