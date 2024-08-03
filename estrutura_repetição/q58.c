#include <stdio.h>

// A questão está escrita errada, logo, para
// substituir, fiz a série de Nilakantha, veja mais
// sobre no wikipedia: 
// https://pt.wikipedia.org/wiki/Pi#:~:text=A%20s%C3%A9rie%20de%20Nilakantha%20converge,para%20calcular%20d%C3%ADgitos%20de%20%CF%80.

// Pode estar errado.
int main()
{
    float sum = 3;
    int divider, divPower, dCont, iCont, nTerms;

    scanf("%d", &nTerms);

    if (nTerms > 1)
    {
        for(divider = 2, iCont = 0; iCont < nTerms - 1; iCont++)
        {
            divPower = 1;
            for(dCont = divider; dCont <= divider + 2; dCont++)
                divPower *= dCont;
            if (iCont % 2 == 1)
                divPower *= -1;
            sum += 4.0 / divPower;
            divider += 2;
        }
    }

    printf("O valor aproximado de pi é: %f", sum);
}