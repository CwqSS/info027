#include <stdio.h>

// 44.  Escreva  um  programa  que  imprima  todos  os  números  de  1    até  100,  inclusive,  e  a  soma de todos eles.

int main()
{
    int iCont, soma = 0;

    printf("Número | Soma\n");

    iCont = 1;
    while(iCont <= 100){
        soma += iCont;
        printf("%d | %d\n", iCont, soma);
        iCont += 1;
    }
}