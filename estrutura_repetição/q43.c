#include <stdio.h>

// 43.  Escreva  um  programa  que  imprima  todos  os  números  pares  do  intervalo  fechado  de  1  a 100.

int main()
{
    int iCont;

    for (iCont = 1; iCont <= 100; iCont++)
        if (iCont % 2 == 0)
            printf("%d\n", iCont);
    
    // for (iCont = 2; iCont <= 100; iCont += 2)
    //     printf("%d\n", iCont);
}