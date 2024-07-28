#include <stdio.h>

int main()
{
    float x, y;
    int quadrante;
    
    printf("Informe as coordenadas (x y): ");
    scanf("%f %f", &x, &y);
    
    if (x == 0 && y == 0)
        quadrante = 0;
    else if (x > 0 && y > 0)
        quadrante = 1;
    else if (x < 0 && y > 0)
        quadrante = 2;
    else if (x < 0 && y < 0)
        quadrante = 3;
    else if (x > 0 && y < 0)
        quadrante = 4;
    else if (x != 0 && y == 0)
        quadrante = 5; // eixo x;
    else
        quadrante = 6; // eixo y;
    
    if (quadrante == 0)
        printf("O ponto pertence à origem.");
    else if (quadrante < 5)
        printf("O ponto pertence ao %d° quadrante.", quadrante);
    else if (quadrante == 5)
        printf("O ponto pertence ao eixo x.");
    else
        printf("O ponto pertence ao eixo y.");
}