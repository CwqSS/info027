#include <stdio.h>
#define TAM 257

int main()
{
    char texto[TAM], vogal[] = "AEIOU";
    int iCont, jCont, consoantes = 0; 
    int totalEncontrosConsonantais = 0;

    fgets(texto, TAM, stdin);

    for(iCont = 0; texto[iCont]; iCont++)
    {
        if(texto[iCont] >= 'a' && texto[iCont] <= 'z')
            texto[iCont] = 'A' - 'a' + texto[iCont];
        else if(texto[iCont] == '\n')
            texto[iCont] = '\0';
    }

    for(iCont = 0; texto[iCont]; iCont++)
    {
        if(texto[iCont] >= 'A' && texto[iCont] <= 'Z')
        {
            consoantes += 1;
            for(jCont = 0; vogal[jCont]; jCont++)
                if(vogal[jCont] == texto[iCont])
                {
                    consoantes = 0;
                }
            if(consoantes == 2)
                totalEncontrosConsonantais += 1;                
        }
        else
            consoantes = 0;
    }

    printf("Encontros consonantais: %d", totalEncontrosConsonantais);
}