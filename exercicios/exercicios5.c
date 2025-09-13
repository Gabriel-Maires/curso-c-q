#include <stdio.h>

// Objetivo do programa: Calcule a área de um quadrado.					
// Como calcular: Area = lado * lado

int main() {
    float lado;

    printf("Olá Seja bem-vindo! Por gentileza, digite a medida de um dos lados, para calcular a área do quadrado: ");
    scanf("%f", &lado);

    float calculo = ((lado * lado));
    printf("A área do quadrado é: %.2f", calculo);

    return 0;
}
