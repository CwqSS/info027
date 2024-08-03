#include <stdio.h>

// 52.  A  série  de  FETUCCINE  é  gerada  da  seguinte  forma:  os  dois  primeiros  termos  são 
// fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos 
// dois termos anteriores, ou seja: 
// 1. Ai = Ai-1 + Ai-2, para i ímpar 
// 2. Ai = Ai-1 - Ai-2, para i par 
 
// Criar  um  algoritmo  em  PORTUGOL  que  imprima  os  N  primeiros  termos  da  série  de 
// FETUCCINE,  sabendo-se  que  para  existir  esta  série  serão  necessários  pelo  menos  três 
// termos.

int main()
{
    int validacao = 0, nTermos, termo1, termo2;
    int termoN, termoAnterior, termoAnteAnterior;
    int iCont;

    printf("Informe quantos termos você deseja ter na série de Fetuccine: ");
    scanf("%d", &nTermos);

    if (nTermos >= 3)
    {
        printf("Informe os dois primeiros termos da sequência (termo 1, termo 2): ");
        scanf("%d %d", &termo1, &termo2);
        validacao = 1;
    }
    else
    {
        printf("Entrada inválida. A sequência deve possuir ao menos 3 termos.");
    }

    if (validacao)
    {
        printf("\n%d %d ", termo1, termo2);
        termoAnteAnterior = termo1;
        termoAnterior = termo2;
        for(iCont = 3; iCont <= nTermos; iCont++)
        {
            if(iCont % 2 == 0)
            {
                termoN = termoAnterior - termoAnteAnterior;
            }
            else
            {
                termoN = termoAnterior + termoAnteAnterior;
            }
            printf("%d ", termoN);
            termoAnteAnterior = termoAnterior;
            termoAnterior = termoN;
        }
    }
}