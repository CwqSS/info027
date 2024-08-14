#include <stdio.h>
#define TAM 512

int main()
{
    char texto[TAM], textoNormalizado[TAM], maiorPalavra[TAM];
    int iCont, kCont, jCont, ndx, temEspaco = 0;
    int inicio, fim, qtd = 0;
    
    puts("Informe uma string:");
    fgets(texto, TAM, stdin);
    for(iCont = 0; texto[iCont]; iCont++)
        if(texto[iCont] == '\n')
            texto[iCont] = '\0';
    
    // Normaliza a string
    for(iCont = 0, kCont = 0; texto[iCont]; kCont++, iCont++)
    {
        textoNormalizado[kCont] = texto[iCont];
        if(texto[iCont] == ' ')
            temEspaco = 1;
        while(temEspaco)
        {
            if(texto[iCont + 1] != ' ')
                temEspaco = 0;
            else
                iCont++;
        }
    }
    textoNormalizado[kCont] = '\0';
    puts(textoNormalizado);
    // Descobre o inicio e o fim da primeira maior palavra que encontrar
    inicio = fim = qtd = 0;
    for(ndx = 0, kCont = 0; textoNormalizado[ndx]; ndx++)
    {
        if(textoNormalizado[ndx] != ' ' && ((textoNormalizado[ndx] >= 'a' && textoNormalizado[ndx] <= 'z') || (textoNormalizado[ndx] >= 'A' && textoNormalizado[ndx] <= 'Z')))
        {
            kCont += 1;
            if(qtd < kCont)
            {
                inicio = ndx - kCont + 1;
                fim = inicio + kCont - 1;
                qtd = kCont;
            }
        }
        else
            kCont = 0;
    }
    
    // Passa a maior palavra para outra string
    for(kCont = 0, iCont = inicio; iCont <= fim; iCont++){
        maiorPalavra[kCont] = textoNormalizado[iCont];
        kCont++;
    }
    maiorPalavra[kCont] = '\0';
    
    puts("A maior palavra da string é:");
    puts(maiorPalavra);
}

