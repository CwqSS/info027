#include <stdio.h>
#define TAM 512

int main()
{
    char entrada[TAM], saida[TAM];
    char vogal[11] = "AaEeIiOoUu";
    int ndx, ndxSaida, iCont, seguir;

    fgets(entrada, TAM, stdin);

    for(ndx = 0; entrada[ndx]; ndx++)
        if(entrada[ndx] == '\n')
            entrada[ndx] = '\0';

    ndxSaida = 0;
    for(ndx = 0; entrada[ndx]; ndx++)
    {
        seguir = 1;
        for(iCont = 0; vogal[iCont] && seguir; iCont++)
            if(entrada[ndx] == vogal[iCont])
            {
                saida[ndxSaida] = entrada[ndx];
                entrada[ndx] = ' ';
                ndxSaida++;
                seguir = 0;
            }
    }

    for(ndx = 0; entrada[ndx]; ndx++)
    {
        if((entrada[ndx] >= 'A' && entrada[ndx] <= 'Z') || (entrada[ndx] >= 'a' && entrada[ndx] <= 'z'))
        {
            saida[ndxSaida] = entrada[ndx];
            ndxSaida++;
        }
    }
    saida[ndxSaida] = '\0';

    puts(saida);

}
 