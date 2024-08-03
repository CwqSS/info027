#include <stdio.h>

// Série de Taylor (e)

int main()
{
    double e;
    double sum = 1, divider, factDivider;
    int nTerms, isValid = 0, fCont;

    scanf("%d", &nTerms);

    if(nTerms >= 1)
    {
        isValid = 1;
        if (nTerms > 1)
        {
            for(divider = 1; divider <= nTerms; divider++)
            {
                for(factDivider = 1, fCont = 1; fCont <= divider; fCont++)
                    factDivider *= fCont;
                sum += 1.0 / factDivider;
            }
        }
    }

    if (isValid)
        printf("Valor aproximado de e: %f", sum);
    else
        printf("Entrada inválida.");
}