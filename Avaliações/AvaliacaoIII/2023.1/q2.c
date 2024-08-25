#include <stdio.h>
#define TAM 9
#define TAM_LINHAS 5

int main()
{
    char fitas[TAM_LINHAS][TAM], consenso[TAM];
    char enzimas[4] = {'C', 'G', 'A', 'T'}, resultado;
    int maior, aux, iCont, jCont, kCont;

    puts("Informe as sequências:");
    for(iCont = 0; iCont < TAM_LINHAS; iCont++)
        scanf("%s", fitas[iCont]);
    
    for(jCont = 0; jCont < TAM - 1; jCont++)
    {   
        maior = 0;
        for(kCont = 0; kCont < 4; kCont++)
        {
            aux = 0;
            for(iCont = 0; iCont < TAM_LINHAS; iCont++)
                if(fitas[iCont][jCont] == enzimas[kCont])
                    aux += 1;
            if(aux > maior)
            {
                resultado = enzimas[kCont];
                maior = aux;
            }
            else if(aux == maior)
                resultado = '?';
        }
        consenso[jCont] = resultado;
    }
    consenso[jCont] = '\0';

    puts("CONSENSO:");
    printf("%s", consenso);
}
