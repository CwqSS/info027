#include <stdio.h>

int main()
{
    int nTermos;
    int divisor, dCont, potDivisor;
    float somatorio = 0;

    printf("Informe o número de termos: ");
    scanf("%d", &nTermos);

    if (nTermos > 0)
    {
        for(divisor = 1; divisor <= nTermos; divisor++)
        {
            potDivisor = 1;
            for(dCont = 0; dCont < divisor; dCont++)
                potDivisor *= divisor;
            somatorio += 1.0 / potDivisor;
        }
    }   
    
    printf("Somatório: %f", somatorio);
}
