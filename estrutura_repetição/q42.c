#include <stdio.h>

// 42.  Escreva  um  programa  que  imprima  todos  os  números  inteiros  de  100  a  1  (em  ordem decrescente).

int main()
{
    int iCont;

    iCont = 100;
    while(iCont > 0){
        printf("%d\n", iCont);
        iCont -= 1;
    }

    // for(iCont = 100; iCont > 0; iCont--)
    //      printf("%d\n", iCont);
}