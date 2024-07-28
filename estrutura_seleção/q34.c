#include <stdio.h>

//  34. Uma  financeira  usa  o  seguinte  critério  para  conceder  empréstimos:  o  valor  total  do 
// empréstimo  deve  ser  até  dez  vezes  o  valor  da  renda  mensal  do  solicitante  e  o  valor  da 
// prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa 
// que  leia  a  renda  mensal  de  um  solicitante,  o  valor  total  do  empréstimo  solicitado  e  o 
// número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou 
// não ser concedido

int main()
{
    float rendaMensal, valorEmprestimo, tetoEmprestimo, tetoPrestacao;
    int numDePrestacoes;

    printf("Informe a renda mensal do solicitante: ");
    scanf("%f", &rendaMensal);

    tetoEmprestimo = 10 * rendaMensal;
    tetoPrestacao = rendaMensal * 30.0 / 100;

    printf("Informe o valor do empréstimo solicitado: ");
    scanf("%f", &valorEmprestimo);

    printf("Informe em quantas prestações o solicitante deseja quitar o empréstimo: ");
    scanf("%d", &numDePrestacoes);

    if (valorEmprestimo <= tetoEmprestimo && valorEmprestimo / numDePrestacoes <= tetoPrestacao)
        printf("O empréstimo pode ser concedido.");
    else
        printf("O empréstimo não pode ser concedido.");
}