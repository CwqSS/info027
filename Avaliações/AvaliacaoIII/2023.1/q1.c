#include <stdio.h>
#define TAM 256
#define M 7
#define N 18

int main()
{
    char cacaPalavras[M][N];
    char palavra[TAM];
    int mCont, nCont, pCont, maior, aux, iCont;
    int entradaValida = 0, pontuacao = 0;

    puts("Informe o caça palavras:");
    for(mCont = 0; mCont < M; mCont++)
        for(nCont = 0; nCont < N; nCont++)
            scanf(" %c", &cacaPalavras[mCont][nCont]);
    
    puts("Informe a palavra que você encontrou:");
    scanf(" %s", palavra);

    if(M >= N)
        maior = M + 1;
    else
        maior = N + 1;
    
    for(pCont = 0; palavra[pCont]; pCont++);
    
    if(maior >= pCont)
        entradaValida = 1;
    
    for(mCont = 0; mCont < M && pontuacao == 0; mCont++)
    {
        iCont = aux = 0;
        for(nCont = 0; nCont < N && pontuacao == 0; nCont++)
        {
            if(cacaPalavras[mCont][nCont] == palavra[iCont])
            {
                iCont += 1;
                if(iCont == pCont)
                {
                    pontuacao = pCont;
                }
            }
            else
                iCont = 0;
        }
    }
    
    for(nCont = 0; nCont < N && pontuacao == 0; nCont++)
    {
        iCont = aux = 0;
        for(mCont = 0; mCont < M && pontuacao == 0; mCont++)
        {
            if(cacaPalavras[mCont][nCont] == palavra[iCont])
            {
                iCont += 1;
                if(iCont == pCont)
                {
                    pontuacao = pCont;
                }
            }
            else
                iCont = 0;
        }
    }
    
    if(pontuacao == 0)
        pontuacao -= 5;

    printf("\n");
    if(entradaValida)
        printf("A sua pontuação é : %d", pontuacao);
    else
        puts("Entrada inválida, palavra maior do que devia.");
}