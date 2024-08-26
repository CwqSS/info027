#include <stdio.h>
#define TAM 12

int main()
{
    int matriz[TAM][TAM];
    int idadeHomem, idadeMulher, frequenciaHomem, frequenciaMulher, frequenciaCasal[2];
    int iCont, jCont, kCont, idadeValida = 0;
    int aux, frequencia = 0;
    
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            matriz[iCont][jCont] = 0;
    
    do
    {
        puts("Informe a idade do casal (H M):");
        scanf("%d %d", &idadeHomem, &idadeMulher);
        if(idadeHomem >= 18 && idadeHomem <= 30 && idadeMulher >= 18 && idadeMulher <= 30)
        {
            iCont = idadeHomem - 18;
            jCont = idadeMulher - 18;
            matriz[iCont][jCont] += 1;
            idadeValida += 1;
        }
        else
            iCont = jCont = -1;
    } while(iCont != -1);
    
    for(iCont = 0; iCont < TAM; iCont++)
    {
        aux = 0;
        for(jCont = 0; jCont < TAM; jCont++)
            aux += matriz[iCont][jCont];
        if(aux > frequencia)
            frequencia = iCont;
    }
    frequenciaHomem = frequencia + 18;
    
    frequencia = 0;
    for(jCont = 0; jCont < TAM; jCont++)
    {
        aux = 0;
        for(iCont = 0; iCont < TAM; iCont++)
            aux += matriz[iCont][jCont];
        if(aux > frequencia)
            frequencia = jCont;
    }
    frequenciaMulher = frequencia + 18;
    
    frequencia = 0;
    for(iCont = 0; iCont < TAM; iCont++)
        for(jCont = 0; jCont < TAM; jCont++)
            if(matriz[iCont][jCont] > frequencia)
            {
                frequencia = matriz[iCont][jCont];
                frequenciaCasal[0] = iCont + 18;
                frequenciaCasal[1] = jCont + 18;
            }
    
    if(idadeValida > 0)
    {
        printf("A idade de homem mais frequente é: %d\n", frequenciaHomem);
        printf("A idade de mulher mais frequente é: %d\n", frequenciaMulher);
        printf("A idade de homem mais frequente é: %d para homens e %d para mulheres\n", frequenciaCasal[0], frequenciaCasal[1]);
    }
    else
    {
        printf("Informe ao menos um valor.");
    }
}
