#include <stdio.h>
#define TAM 512
#define True 1
#define False 0

int main()
{
    int matriz[TAM][2];
    int iCont, jCont, kCont, idadeValida = True;
    int frequencia, aux, resposta[2], combinacaoIdade[2];
    
    for(iCont = 0; iCont < TAM && idadeValida; iCont++)
        for(jCont = 0; jCont < 2 && idadeValida; jCont++)
        {
            scanf("%d", &matriz[iCont][jCont]);
            if (matriz[iCont][jCont] < 18 || matriz[iCont][jCont] > 30)
            {
                matriz[iCont][jCont] = 0;
                idadeValida = False;
            }
        }
    
    for(jCont = 0; jCont < 2; jCont++)
    {
        frequencia = 0;
        for(kCont = 18; kCont <= 30; kCont++)
        {
            aux = 0;
            idadeValida = True;
            for(iCont = 0; iCont < TAM && idadeValida; iCont++)
            {
                if(kCont == matriz[iCont][jCont])
                {
                    aux += 1;
                    if(aux > frequencia)
                    {
                        frequencia = aux;
                        resposta[jCont] = kCont;
                    }
                }
                if(matriz[iCont][jCont] < 18 || matriz[iCont][jCont] > 30)
                    idadeValida = False;
            }
        }
    }
}
