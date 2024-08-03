#include <stdio.h>

// 51.  A série de Fibonacci é formada pela sequencia:  
// • 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...  
// Escreva  um  programa    que  gere  a  série  de  FIBONACCI  até  o  N-ésimo  termo  (com  N 
// sendo uma entrada do algoritmo).

// A0 = 1, A1 = 1, A2 = 2, A3 = 3, A4 = 5
// An = An-1 + An-2; A0 = A1 = 1;

int main()
{
    int nTermo, termoN, termoAnterior, termoAnteAnterior, aux,  iCont;

    termoAnteAnterior = 0;
    termoAnterior = 1;
    termoN = 1;

    printf("Informe a quantia de termos desejada: ");
    scanf("%d", &nTermo);

    if (nTermo > 0)
        for(iCont = 0; iCont < nTermo; iCont++)
        {
            printf("%d ", termoN);
            termoN = termoAnterior + termoAnteAnterior;
            termoAnteAnterior = termoAnterior;
            termoAnterior = termoN;
        }
    else
        printf("Entrada inválida");
}