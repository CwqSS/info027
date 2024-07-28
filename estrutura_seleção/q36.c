#include <stdio.h>

int main()
{
    float notaI, notaII, notaIII, notaIV, notaV;
    int aprovacaoI = 0, aprovacaoII = 0,  aprovacaoIII = 0; 
    int aprovacaoIV = 0, aprovacaoV = 0;
    char classificao;

    printf("Informe as notas dos exames da seguinte forma (I II III IV V):\\> \n");
    scanf("%f %f %f %f %f", &notaI, &notaII, &notaIII, &notaIV, &notaV);

    if (notaI >= 70)
        aprovacaoI = 1;
    if (notaII >= 70)
        aprovacaoII = 1;
    if (notaIII >= 70)
        aprovacaoIII = 1;
    if (notaIV >= 70)
        aprovacaoIV = 1;
    if (notaV >= 70)
        aprovacaoV = 1;

    // Honestamente, não sei se a vericação da classificação B está correta.

    if (aprovacaoI && aprovacaoII && aprovacaoIII && aprovacaoIV && aprovacaoV)
        classificao = 'A';
    else if (aprovacaoI && aprovacaoII && aprovacaoIV && !(aprovacaoIII && aprovacaoV))
        classificao = 'B';
    else if (aprovacaoI && aprovacaoII && (aprovacaoIII || aprovacaoIV) && !aprovacaoV)
        classificao = 'C';
    else 
        classificao = 'R';
    
    if (classificao != 'R')
        printf("Classificação do aluno: %c.", classificao);
    else
        printf("Aluno reprovado.");
}