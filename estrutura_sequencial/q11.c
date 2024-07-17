#include <stdio.h>

// 11.  Faça um algoritmo para calcular a nota semestral 
// de um aluno. A nota semestral é  obtida pela média
// aritmética entre a nota de 2 bimestres. Cada nota de
// bimestre é composta por  2 notas de provas

int main()
{
    // entradas
    float nota1, nota2, nota3, nota4;
    // saida
    float notaSemestre;

    printf("Informe as notas do primeiro bimestre: \n");
    
    printf("Bimestre 1:\n");
    scanf("%f", nota1);
    scanf("%f", nota2);
    
    printf("Bimestre 2:\n");
    scanf("%f", nota3);
    scanf("%f", nota4);

    notaSemestre = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A nota semestral do aluno é: %f", notaSemestre);
}
