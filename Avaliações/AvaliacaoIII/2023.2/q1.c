#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5

int main()
{
    char padrao[LINHAS][COLUNAS + 1];
    int iCont, jCont, kCont = 0;

    for(iCont = 0; iCont < LINHAS; iCont++)
        scanf("%s", padrao[iCont]);

    puts("-----------------------");
    for(iCont = 0; iCont < LINHAS; iCont++)
    {
        for(jCont = 0; jCont <= COLUNAS; jCont++)
            printf("%c ", padrao[iCont][jCont]);
        printf("\n");
    }    
    puts("-----------------------");
    for(iCont = 0; iCont < LINHAS; iCont++)
    {
        if(kCont)
            iCont--;
        kCont = 0;
        for(jCont = 0; padrao[iCont][jCont]; jCont++)
        {
            if(padrao[iCont][jCont] == '.')
            {
                if(iCont % 2 == 0)
                {
                    if((padrao[iCont][jCont - 1] == 'o' && padrao[iCont + 1][jCont - 1] == '#') || (padrao[iCont][jCont + 1] == 'o' && padrao[iCont + 1][jCont + 1] == '#') || (padrao[iCont - 1][jCont] == 'o' && iCont > 0))
                    {
                        padrao[iCont][jCont] = 'o';
                        kCont = 1;
                    }
                }
                else if(padrao[iCont - 1][jCont] == 'o')
                {
                    padrao[iCont][jCont] = 'o';
                    kCont = 1;
                }
            }
        }
    }

    for(iCont = 0; iCont < LINHAS; iCont++)
    {
        for(jCont = 0; jCont <= COLUNAS; jCont++)
            printf("%c ", padrao[iCont][jCont]);
        printf("\n");
    }
    puts("-----------------------");
}