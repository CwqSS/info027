#include <stdio.h>

// 29.  Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um 
// salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo 
// segue  a  regra:  o  desconto  é  de  11%  do  valor  do  salário,  entretanto,  o  valor  máximo  de 
// desconto é 334,29, o que seja menor.

int main()
{
    float salario, desconto, tetoDesconto = 334.29;

    scanf("%f", &salario);

    desconto = salario * 11 / 100;

    if (desconto > tetoDesconto)
        desconto = tetoDesconto;
    
    printf("R$%.2f", desconto);
}