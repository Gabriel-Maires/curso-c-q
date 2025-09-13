#include <stdio.h>

// Objetivo do programa: Calcule a área de um círculo com base no raio informado.
// Como calcular: A = PI . R ao quadrado


int main() {

    const float pi = 3.14159;
    float area;

    printf("Olá Seja bem-vindo! Por gentileza, digite a medida do raio, para calcular a área do círculo: ");
    scanf("%f", &area);

    float calculo = (pi * (area * area));
    printf("A área do círculo é: %.2f", calculo);

    return 0;

}
