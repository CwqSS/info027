#include <stdio.h>

// 14.  Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre 
// (fica verde), os veículos que nele estavam parados tendem a encontrar os próximos 
// semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam 
// abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre 
// eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade 
// permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para 
// percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir 
// um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um 
// algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes 
// informações:  
// a. a distância desde o semáforo anterior 
// b. a velocidade permitida da via 
// c. a aceleração típica dos carros

int main() 
{
    // entradas
    float distSemaforo, velocidadeMax, aceleracaoTipica;
    float tTotal, t1, t2, d1, d2;
    // saidas
    float tAbertura;

    printf("Digite o valor, em metros, da distância entre os semaforos: \n");
    scanf("%f", &distSemaforo);

    printf("Digite o valor, em km/h, da velocidade máxima permitida na via: \n");
    scanf("%f", &velocidadeMax);
    velocidadeMax /= 3.6;  

    printf("Digite o valor, em m/s², da aceleração típica do veículo: \n");
    scanf("%f", &aceleracaoTipica);

    t1 =  velocidadeMax / aceleracaoTipica;
    d1 = aceleracaoTipica * t1 * t1 / 2;

    d2 = distSemaforo - d1;
    t2 = d2 / velocidadeMax;

    tTotal = t1 + t2;
    tAbertura = tTotal - 3;  

    printf("O semáforo deve abrir após %.2f segundos", tAbertura);
}
