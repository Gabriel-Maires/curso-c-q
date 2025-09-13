#include <stdio.h>

// Objetivo do programa: Calcule o quadrado de um número

int main() {
    int nota1;
    int nota2;
    int nota3;
    int nota4;

    printf("Olá Seja bem-vindo! Por gentileza, digite a primeira nota do aluno: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%d", &nota3);
    printf("Digite a quarta nota do aluno: ");
    scanf("%d", &nota4);

    int calculo = ((nota1 + nota2+ nota3 + nota4) / 4);
    printf("A média deste aluno é: %d", calculo);

    return 0;
}
