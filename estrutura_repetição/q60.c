#include <stdio.h>

int main()
{
    int numero = -1, parcela1, parcela2, primo1 = 0, primo2 = 0;
    int qtdDiv1, qtdDiv2;
    int iCont;
    
    scanf("%d", &numero);
    
    if (numero >= 500 && numero <= 1000 && numero % 2 == 0)
    {
        for(parcela1 = numero; parcela1 >= 2 && primo1 + primo2 != numero; parcela1--)
        {
            for(iCont = 1, qtdDiv1 = 1; iCont < parcela1; iCont++)
                if(parcela1 % iCont == 0)
                    qtdDiv1++;
            
            if (qtdDiv1 == 2)
            {
                for(parcela2 = 2; parcela2 <= parcela1; parcela2++)
                {
                    for(iCont = 1, qtdDiv2 = 1; iCont < parcela2; iCont++)
                        if (parcela2 % iCont == 0)
                            qtdDiv2++;
                    if (qtdDiv2 == 2 && parcela1 + parcela2 == numero)
                    {
                        primo1 = parcela1;
                        primo2 = parcela2;
                    }
                }
            }
        }
    }
    else
    {
        printf("Entrada inválida");
    }

    if (primo1 + primo2 == numero)
    {
        printf("%d + %d = %d", primo1, primo2, numero);
    }
}