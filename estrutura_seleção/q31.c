#include <stdio.h>

int main()
{
    int numPasses, numPassesCompletos, numPassesTouchdown, numPassesInterceptados;
    float jardasPassadas;

    float parcela1, parcela2, parcela3, parcela4;

    float QBRating;

    scanf("%d %d %d %d %f", &numPasses, &numPassesCompletos, &numPassesTouchdown, &numPassesInterceptados, &jardasPassadas);

    parcela1 =  (((float) numPassesCompletos / numPasses) - 0.3) / 0.2;

    parcela2 = ((jardasPassadas / numPasses) - 3) / 4;

    parcela3 = ((float) numPassesTouchdown / numPasses) / 0.05;

    parcela4 = (((float) numPassesInterceptados / numPasses) - 0.095) / 0.04;

    if (parcela1 > 2.375)
        parcela1 = 2.375;
    else if (parcela1 < 0)
        parcela1 = 0;
    
    if (parcela2 > 2.375)
        parcela2 = 2.375;
    else if (parcela2 < 0)
        parcela2 = 0;

    if (parcela3 > 2.375)
        parcela3 = 2.375;
    else if (parcela3 < 0)
        parcela3 = 0;

    if (parcela4 > 2.375)
        parcela4 = 2.375;
    else if (parcela4 < 0)
        parcela4 = 0;


    QBRating = (parcela1 + parcela2 + parcela3 + parcela4) * 100 / 6;

    printf("QBRating = %f", QBRating);
}