#include <stdio.h>

// 17.  Um  programa  para  gerenciar  os  saques  de  um  caixa  eletrônico  deve  possuir  algum 
// mecanismo  para  decidir  o  número  de  notas  de  cada  valor  que  deve  ser  disponibilizado 
// para  o  cliente  que  realizou  o  saque.  Um  possível  critério  seria  o  da  "distribuição  ótima" 
// no  sentido  de  que  as  notas  de  menor  valor  fossem  distribuídas  em  número  mínimo 
// possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar 
// uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 
// 1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a 
// distribuição  das  notas  de  acordo  com  o  critério  da  distribuição  ótima  (considere  existir 
// notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00)

int main()
{
    // entradas
    int saque;
    // processamento
    int aux;
    // saída
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &saque);
    aux = saque;
    
    nota100 = aux / 100;
    aux = aux % 100;

    nota50 = aux / 50;
    aux = aux % 50;

    nota20 = aux / 20;
    aux = aux % 20;

    nota10 = aux / 10;
    aux = aux % 10;

    nota5 = aux / 5;
    aux = aux % 5;

    nota2 = aux / 2;
    aux = aux % 2;

    nota1 = aux;

    printf("Notas de $100: %d\n", nota100);
    printf("Notas de $50: %d\n", nota50);
    printf("Notas de $20: %d\n", nota20);
    printf("Notas de $10: %d\n", nota10);
    printf("Notas de $5: %d\n", nota5);
    printf("Notas de $2: %d\n", nota2);
    printf("Notas de $1: %d\n", nota1);
}