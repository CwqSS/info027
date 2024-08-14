#include <stdio.h>
#define DIASJUNHO 30 
#define QUINZENA 15   

// Honestamente, não era necessário declarar tanta variável. 
// E, provavelmente, havia um jeito mais fácil de fazer isso aqui..

int main()
{
    float diaDoMes[DIASJUNHO];
    float primeiraQuinzena[QUINZENA], segundaQuinzena[QUINZENA];
    float maiorIndice = 0, menorIndice = 0;
    int maisChuva, menosChuva; 
    float mediaPQ = 0, mediaSQ  = 0;
    int iCont;

    printf("Informe os valores pluviométricos do mês de junho (%d valores):\n", DIASJUNHO);
    for(iCont = 0; iCont < DIASJUNHO; iCont++)
        scanf("%f", &diaDoMes[iCont]);

    for(iCont = 0; iCont < DIASJUNHO; iCont++)
    {
        if(diaDoMes[iCont] >= maiorIndice)
        {
            maiorIndice = diaDoMes[iCont];
            maisChuva = iCont;
        }
        else if (diaDoMes[iCont] <= menorIndice)
        {
            menorIndice = diaDoMes[iCont];
            menosChuva = iCont;
        }
    }
    
    for(iCont = 0; iCont < QUINZENA; iCont++)
    {
        primeiraQuinzena[iCont] = diaDoMes[iCont];
        segundaQuinzena[iCont] = diaDoMes[iCont + QUINZENA];
    }

    for(iCont = 0; iCont < QUINZENA; iCont++)
    {
        mediaPQ += primeiraQuinzena[iCont];
        mediaSQ += segundaQuinzena[iCont];
    }

    // iCont vai de 0 até 29, logo devemos somar 1 para obter o dia.
    maisChuva += 1;
    menosChuva += 1;

    printf("O dia que mais choveu foi: %d", maisChuva);
    printf("O dia que menos choveu foi: %d", menosChuva);
    printf("A média da primeira quinzena foi: %f", mediaPQ);
    printf("A média da segunda quinzena foi: %f", mediaSQ);
}