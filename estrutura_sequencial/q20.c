#include <stdio.h>

// 20.  Uma  loja  vende  seus  produtos  no  sistema  entrada  mais  duas  prestações,  sendo  a  entrada 
// maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores 
// possíveis.  Por  exemplo,  se  o  valor  da  mercadoria  for  R$  270,00,  a  entrada  e  as  duas 
// prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de 
// R$  102,75  e  as  duas  prestações  são  a  iguais  a  R$  100,00.  Escreva  um  programa  que 
// receba  o  valor  da  mercadoria  e  forneça  o  valor  da  entrada  e  das  duas  prestações,  de 
// acordo  com  as  regras  acima.  Observe  que  uma  justificativa  para  a  adoção  desta  regra  é 
// que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.

int main() {
    // entradas
    float valor;
    // saidas
    float entrada;
    int prestacao1, prestacao2;

    printf("Informe o valor do produto: $");
    scanf("%f", &valor);

    prestacao1 = prestacao2 = valor / 3;

    entrada = valor - prestacao1 - prestacao2;

    printf("entrada: $%.2f,\nprestação 1: $%d.00,\nprestação 2: $%d.00.", entrada, prestacao1, prestacao2);
}