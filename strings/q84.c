#include <stdio.h>
#define TAM 512
// 84.  Escreva  um  programa  em  C  que  verifique  se  uma  string  normalizada  é  palíndrome  (os 
// mesmos caracteres quando lida da direita para a esquerda).

int main()
{
    char string[TAM], stringNormalizada[TAM];
    int iCont, jCont, temEspaco = 0, ehPalindrome = 1;

    fgets(string, TAM, stdin);
    for(iCont = 0; string[iCont]; iCont++)
        if(string[iCont] == '\n')
             string[iCont] = '\0';

    for(iCont = 0, jCont = 0; string[iCont]; iCont++, jCont++)
    {
        if(string[iCont] == ' ')
            temEspaco = 1;
        stringNormalizada[jCont] = string[iCont];
        while(temEspaco)
        {
            if(string[iCont + 1] != ' ')
                temEspaco = 0;
            else
                iCont++;
        }
    }
    stringNormalizada[jCont] = '\0';

    if(stringNormalizada[0] == ' ')
        for(iCont = 1; stringNormalizada[iCont]; iCont++)
            stringNormalizada[iCont - 1] = stringNormalizada[iCont];
    
    for(iCont = 0; stringNormalizada[iCont]; iCont++);

    for(iCont -= 1, jCont = 0; stringNormalizada[jCont]; jCont++, iCont--)
        if(stringNormalizada[iCont] != stringNormalizada[jCont])
            ehPalindrome = 0;

    puts(stringNormalizada);
    
    if(ehPalindrome)
        puts("A string é palindrome");
    else
        puts("A string não é palindrome");
}