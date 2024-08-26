#include <stdio.h>
#define N 12

int main()
{
    int matriz[N][N];
    int idadeHomem, idadeMulher;
    int iCont, jCont;
    int aux, frequencia;
    int idadeHomemFrequente, idadeMulherFrequente, idadeCasal[2];
    
    for(iCont = 0; iCont < N; iCont++)
        for(jCont = 0; jCont < N; jCont++)
            matriz[iCont][jCont] = 0;
    
    do {
        puts("Informe a idade do casal(H M):");
        scanf("%d %d", &idadeHomem, &idadeMulher);
        if(idadeHomem >= 18 && idadeHomem <= 30 && idadeMulher >= 18 && idadeMulher <= 30)
        {
            iCont = idadeHomem - 18;
            jCont = idadeMulher - 18;
            matriz[iCont][jCont] += 1;
        }
        else
            iCont = jCont = -1; 
    }while(iCont != -1);
    
    // homens
    frequencia = 0;
    for(iCont = 0; iCont < N; iCont++)
    {
        aux = 0;
        for(jCont = 0; jCont < N; jCont++)
            aux = aux + matriz[iCont][jCont];
        if(aux > frequencia)
        {
            frequencia = aux;
            idadeHomemFrequente = iCont + 18;
        }
    }
    
    // mulheres
    frequencia = 0;
    for(jCont = 0; jCont < N; jCont++)
    {
        aux = 0;
        for(iCont = 0; iCont < N; iCont++)
            aux = aux + matriz[iCont][jCont];
        if(aux > frequencia)
        {
            frequencia = aux;
            idadeMulherFrequente = jCont + 18;
        }
    }
    
    // casal
    frequencia = 0;
    for(iCont = 0; iCont < N; iCont++)
        for(jCont = 0; jCont < N; jCont++)
            if(matriz[iCont][jCont] > frequencia)
            {
                frequencia = matriz[iCont][jCont];
                idadeCasal[0] = iCont + 18; 
                idadeCasal[1] = jCont + 18;
            }
    
    printf("A idade mais frequente dos homens é: %d.\n", idadeHomemFrequente);
    printf("A idade mais frequente das mulheres é: %d.\n", idadeMulherFrequente);
    printf("A combinação de idades mais frequentes é: ");
    printf("%d para homens e %d para mulheres.", idadeCasal[0], idadeCasal[1]);
}