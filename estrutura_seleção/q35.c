#include <stdio.h>

// 35.  Escreva  um  programa  que  leia  um  número  inteiro  de  1  a  7  e  informe  o  dia  da  semana 
// correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um 
// dia da semana, mostre uma mensagem de erro.

// Vou lançar um switch
int main()
{
    int diaDaSemana;

    printf("Informe um número inteiro, de um a sete, e lhe direi o dia da semana correspondente: ");
    scanf("%d", &diaDaSemana);

    switch (diaDaSemana){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("Erro: valor inválido.");
    }
}