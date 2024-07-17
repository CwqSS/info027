#include <stdio.h>

// 15.  Num  dia  de  sol,  você  deseja  medir  a  altura  de  um  prédio,  porém,  a  trena  não  é 
// suficientemente  longa.  Assumindo  que  seja  possível  medir  sua  sombra  e  a  do  prédio  no 
// chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e 
// calcular a altura do prédio. 

int main()
{
    // entrada
    float suaSombra, sombraDoPredio, suaAltura;
    // saida
    float alturaDoPredio;

    printf("Digite as seguintes informações (em metros):\n");

    printf("Comprimento da sua sombra: ");
    scanf("%f", &suaSombra);
    
    printf("Comprimento da sombra do prédio: ");
    scanf("%f", &sombraDoPredio);
    
    printf("Sua altura: ");
    scanf("%f", &suaAltura);

    alturaDoPredio = sombraDoPredio * suaAltura / suaSombra;

    printf("A altura do prédio, em metros, é: %.2f m", alturaDoPredio);
}
