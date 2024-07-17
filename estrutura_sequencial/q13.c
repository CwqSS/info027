#include <stdio.h>

// 13. Um circuito elétrico é composto de duas resistências 
//     R1 e R2 em paralelo, e ambas em sequência de uma 
//     resistência R3. Faça um algoritmo para calcular a 
//     resistência equivalente desse circuito.

int main()
{
    // entradas
    float r1, r2, r3;
    // saidas
    float rE;

    printf("Informe os valores das resistências em ohms: ");
    
    printf("Resistência 1: ");
    scanf("%f", &r1);
   
    printf("Resistência 2: ");
    scanf("%f", &r2);
    
    printf("Resistência 1: ");
    scanf("%f", &r1);

    rE = (r1 * r2) / (r1+r2) + r3;

    printf("A resistência equivalente é: %.2f", rE);
}
